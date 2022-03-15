
//Madison Sawvel

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
	string name;
	string major;
	double grade;
};

void display(Student); // test on array students
void filterByMajor(Student a[] ,int size, string m);
void filterByGrade(Student b[], int size, double x);

int main() {
	cout << "What is the same of the input file?" << endl;
	string filename;
	cin >> filename;
	ifstream myFile(filename);
	int n;
	myFile >> n;
	Student* students = new Student[n];
	Student tempS;
	for (int i = 0; i < n; i++) {
		myFile >> tempS.name;
		myFile >> tempS.major;
		myFile >> tempS.grade;
		students[i] = tempS;
	}
	display(tempS);
	filterByMajor(students, n, "Math");
	filterByMajor(students, n, "CS");
	filterByGrade(students, n, 3.0);
	filterByGrade(students, n, 3.5);
}

void display(Student name) {
	cout << name.name << " majors in " << name.major << " with a grade of " << name.grade << endl;
}
void filterByMajor(Student a[], int size, string m) {
	cout << "These students are in this major: ";
	for (int i = 0; i < size; i++) {
		if (a[i].major == m) {
			cout << a[i].name << " ";
		}
	}
	cout << endl;
}
void filterByGrade(Student b[], int size, double x) {
	cout << "These students have a higher grade than " << x << " : ";
	for (int i = 0; i < size; i++) {
		if (b[i].grade > x) {
			cout << b[i].name << " ";
		}
	}
	cout << endl;
}