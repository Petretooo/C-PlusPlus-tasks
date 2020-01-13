#include<iostream>
using namespace std;
int main() {
	const int n = 10;
	int array[n];
	int sumNegative = 0, sumPositive= 0 ;
	int firstPositive = 0, lastPositive = 0;
	cout << "Condition: Create a program for processing a one-dimensional array À[10]." << endl;
	for (int i = 1; i <= n; i++) {
		cin >> array[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << array[i];
	}
	for (int i = 1; i <= n; i++) {
		if (array[i] > 0) {
			cout << "First positive numbver is: " << array[i] << endl;
			firstPositive = i;
			break;
		}
	}
	for (int i = n; i >= 1 ; i--) {
		if (array[i] > 0) {
			cout << "Last positive number is: " << array[i] << endl;
			lastPositive = i;
			break;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (i >= firstPositive && i <= lastPositive) {
			if (array[i] > 0) {
				sumPositive += array[i];
			}
			else if (array[i] < 0) {
				sumNegative += array[i];
			}
		}
	}
	cout << "Positive sum is: " << sumPositive<<endl;
	cout << "Negative sum is: " << sumNegative<<endl;
	if (sumPositive % 2 == 0) {
		for (int i = 1; i <= n; i++) {
			if (array[i] > 0) {
				array[i] = 0;
			}
		}
		for (int i = 1; i <= n; i++) {
			cout << array[i] << endl;
		}
	}
}