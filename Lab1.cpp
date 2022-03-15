//Madison Sawvel

#include <iostream>

using namespace std;

void greaterThan(double array[], int size);
void character(char c[], int size, char entered);
void palindrome(char c[], int size);
void sumOfValues(double a[][3]);
void minimum(double table[][4], int rows, int r);
void maximum(double table[][4], int rows, int c);


int main() {
	double array1g[8] = { 2,21,5,4,8,16,37,-5 };
	greaterThan(array1g, 8);
	
	double array2g[7] = { 13,-64,3,-4,7,52,76 };
	greaterThan(array2g, 7);

	char array1c[8] = {'a','b','c','d','e','f','g','h'};
	char entered;
	cin >> entered;
	character(array1c, 8, entered);

	char array2c[7] = { 'l','m','n','o','p','q','r' };
	character(array2c, 7, entered);

	char array1p[4] = { 'i','j','k','l' };
	palindrome(array1p, 4);

	char array2p[7] = { 's', 'e', 'm', 'e','m','e','s' };
	palindrome(array2p, 7);

	double array1[2][3] = { {2,5,12}, {17,9,0} };
	sumOfValues(array1);

	double table[2][4] = { {54,76,52,68}, {91,75,50,1001} };
	minimum(table, 2, 1);
	minimum(table, 2, 0);

	double t[2][4] = { {34,67,24,53}, {101,145,136,158} };
	maximum(t, 2, 2);
	maximum(t, 2, 3);
	
}

void greaterThan(double array[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] > 7) {
			count = count + 1;
		}
	}
	cout << count << endl;
}
void character(char c[], int size, char entered) {
	for (int i = 0; i < size; i++) {
		if (c[i] == entered) {
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

void palindrome(char p[], int size) {
	int flag = 0;
	for (int i = 0; i <= size / 2 && 2 != 0; i++) { //I watched/read a few tutorials for this one
		if (p[i] != p[size - i - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		cout << "False" << endl;
	}
	else {
		cout << "True" << endl;
	}
}

void sumOfValues( double a[][3]) {
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum = sum + a[i][j];

		}
	}
	cout << sum << endl;
}

void minimum(double t[][4], int rows, int r) { //I'm very confused about the difference of rows and r, I did my best
	double min = t[r][0];
	for (int i = 0; i < 4; i++) {
		if (t[r][i] < min) {
			min = t[r][i];
		}
	}
	cout << min << endl;
}

void maximum(double t[][4], int rows, int c) { // I couldn't get this one to work and I gave up. It's either printing out 76 for both or its giving me a random address
	double max = t[rows][c];
	for (int i = 0; i < 4; i++) {
		if (t[rows][i] > max) {
			max = t[2][i];
		}
	}
	cout << max << endl;
}
