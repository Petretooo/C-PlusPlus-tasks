#include<iostream>
using namespace std;
int main() {
	double offers[25], maxOffer, minOffer, difference;
	int i, nomer = 0;

	for (i = 1; i <= 25; i++) {
		cout << "Candidate's offer " << i << " : ";
		cin >> offers[i];
	}

	maxOffer = INT_MIN;
	minOffer = INT_MAX;

	for (i = 1; i <= 25; i++) {
		if (offers[i] > maxOffer) {
			maxOffer = offers[i];
			nomer = i;
		}
		if (offers[i] < minOffer) {
			minOffer = offers[i];
		}
	}

	difference = maxOffer - minOffer;

	cout << "The greater offer " << maxOffer << " has candidate number: " << nomer << endl;
	cout << "Difference between highest and lowest offer is: " << difference << endl;

	system("pause");
}