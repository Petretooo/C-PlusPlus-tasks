#include <iostream>
using namespace std;
void Array(int A[], int size) {
	for (int i = 0; i < size; i++) {
		cin >> A[i];
		if (A[i] % 2 == 1) {
			while (A[i] % 2 != 0) {
				cout << "Vavedete chetno: ";
				cin >> A[i];
			}

		}
		if (A[i] < -10) {
			while (A[i] < -10) {
				cout << "Vavedete v intervala: ";
				cin >> A[i];
			}
		}
		else if (A[i] > 20) {
			while (A[i] > 20) {
				cout << "Vavedete v intervala: ";
				cin >> A[i];
			}
		}
	}
}
void funkciq(int A[], int size) {
	for (int i = size; i > 0; i--) {
		cout << A[i] << " ";
	}
}
void funkciq1(int A[], int size) {
	int counter = 0;
	for (int i = 0; i <= size; i++) {
		if (A[i] > 0) {
			for (int j = 0; j <= size; j++) {
				if (A[i] + A[j] == 0) {
					counter++;
				}
			}
		}
		else if (A[i] < 0) {
			for (int j = 0; j <= size; j++) {
				if (A[i] + A[j] == 0) {
					counter++;
				}
			}
		}
	}
	cout << counter << endl;
}
int main() {
	const int n = 16;
	int A[n];
	Array(A, n);
	funkciq(A, n);
	funkciq1(A, n);
}