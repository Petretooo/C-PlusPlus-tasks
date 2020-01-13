#include <iostream>
using namespace std;
void programmFile() {
	setlocale(LC_ALL, "Bulgarian");
	int c, d;
	cin >> c;
	cin >> d;
	cout<< c*d<< endl;
}
int sum(int a, int b) {
	return(a + b);
}
int main() {
	int c, d;
	programmFile();
	int a, b;
	cin>> a;
	cin>> b;
	cout << sum(a,b) << endl;
	system("pause");
	return 0;
}
