
//Madison Sawvel

#include <iostream>
#include <assert.h>

using namespace std;

int* squares(int n);
double* removeFirst(double a[], int size);
int* addToEnd(int b[], int size, int last);

int main() {
	int a[] = { 1,4,9,16,25,36 };
	int* ptr = a;
	assert(*ptr == *squares(6));
	int c[] = { 1,4,9,16,25,36,49,64,81 };
	ptr = c;
	assert(*ptr == *squares(9));
	int d[] = { 1,4,16,25,36,49,64,81,100,121 };
	ptr = d;
	assert(*ptr == *squares(11));

	double e[] = { 1,4,9,16,25,36 };
	double f[] = { 4,9,16,25,36 };
	double* ptr2 = f;
	assert(*ptr2 == *removeFirst(e, 6));

	double g[] = { 9,16,25,36 };
	ptr2 = g;
	assert(*ptr2 == *removeFirst(f, 5));

	double h[] = { 16,25,36 };
	ptr2 = h;
	assert(*ptr2 == *removeFirst(g, 4));

	int k[] = { 11,6,46,79,204 };
	int l[] = { 11,6,46,79 };
	ptr = k;
	assert(*ptr == *addToEnd(l, 4, 204));

	int m[] = { 23,45,62,400,7 };
	int n[] = { 23,45,62,400 };
	ptr = m;
	assert(*ptr == *addToEnd(n, 4, 7));

	int o[] = { 1,2,3 };
	int p[] = { 1,2 };
	ptr = o;
	assert(*ptr == *addToEnd(p, 2, 3));
}	


int* squares(int n) {
	int  * a1 = new int[n];
	for (int i = 1; i <= n; i++) {
		a1[i - 1] = i * i;
	}
	return a1;
}

double* removeFirst(double a[], int size) {
	double* a2 = new double[size - 1];
	for (int i = 0; i < (size-1); i++) {
		a2[i] = a[i+1];
	}
	return a2;
}
int* addToEnd(int b[], int size, int last) {
	int* a3 = new int[size+1];
	for (int i = 0; i < size; i++) {
		a3[i] = b[i];
	}
	a3[size] = last;
	return a3;
}
