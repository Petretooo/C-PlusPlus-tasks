/*
Да се напише програма, която въвежда числа, като запомня само такива от тях,
които са различни от 0 и непосредствено преди тях е било въведено някакво
по-малко от тях число. Четенето трябва да завърши, когато бъдат
запомнени 7 числа. След това програмата трябва да изведе на един
ред всички запомнени положителни числа, а на друг ред - всички
запомнени отрицателни числа.
*/


#include<iostream>
using namespace std;
void firstArray(int A[], int size) {
	for (int i = 0; i <= size; i++) {
		cin >> A[i];
	}
	return;
}
void algorithm(int A[], int size, int B[], int size2) {
	int broqch = 0;
	for (int i = 0; i <= size; i++) {
		if (A[i] != 0) {
			if (A[i] < A[i + 1]) {
				for (int j = broqch; j <= size2; j++) {
					B[j] = A[i];
					broqch++;
					break;
				}
			}
		}
		if (broqch == size2) {
			break;
		}
	}
	cout << endl;
	return;
}
void secondArray(int B[], int size2);
int main() {
	const int n = 8;
	const int m = 7;
	int A[n], B[m];
	firstArray(A, n);
	algorithm(A, n, B, m);
	secondArray(B, m);
	system("pause");
}

void secondArray(int B[], int size2) {
	for (int i = 0; i <= size2; i++) {
		cout << B[i] << endl;
	}
}