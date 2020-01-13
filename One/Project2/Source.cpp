#include<iostream>
using namespace std;
int main() {

	char arr[]{ 73, 39, 109, 32, 115, 111, 114, 114, 121 };
	for (int i = 0; i < 9; i++) {
		cout << arr[i];
	}
	cout << endl;

	system("pause");








#include <iostream>
	using namespace std;
	int main() {
		int n;
		cin >> n;
		int a[4];
		int mask = 0xff;
		for (int i = 0; i < 4; i++) {
			a[i] = n & mask;
			n >>= 8;
		}
		for (int i = 3; i >= 0; i--) {
			cout << a[i];
			if (i) {
				cout << ".";
			}
		}

		cout << endl;
		system("pause");
		return 0;
	}

























 /*
	cout << "ceil()" << endl;
	cout << endl;

	cout << ceil(2.4) << endl;
	cout << ceil(2.5) << endl;
	cout << ceil(2.6) << endl;
	cout << ceil(-2.4) << endl;
	cout << ceil(-2.5) << endl;
	cout << ceil(-2.6) << endl;

	cout << endl;
	cout << "floor()" << endl;
	cout << endl;

	cout << floor(2.4) << endl;
	cout << floor(2.5) << endl;
	cout << floor(2.6) << endl;
	cout << floor(-2.4) << endl;
	cout << floor(-2.5) << endl;
	cout << floor(-2.6) << endl;

	cout << endl;
	cout << "round()" << endl;
	cout << endl;

	cout << round(2.4) << endl;
	cout << round(2.5) << endl;
	cout << round(2.6) << endl;
	cout << round(-2.4) << endl;
	cout << round(-2.5) << endl;
	cout << round(-2.6) << endl;

	cout << endl;
	cout << "abs() è fabs()" << endl;
	cout << endl;

	cout << abs(-2) << endl;
	cout << fabs(-2.5) << endl;
	system("pause");
	*/

}