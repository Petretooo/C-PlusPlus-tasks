#include <iostream>
using namespace std;
int main() {
	const int n = 5;
	int arr[n];
	for (int i = 0; i <= n-1; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i <= n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}