#include<iostream> 
#include<string>
using namespace std;
int main() {
	const int  n = 5;
	string masiv[50];
	int masiv2[n];

	for (int i = 1; i <= n; i++) {
		cin >> masiv[i];
	}
	int i = 1;
	for (int i = 1; i <= n; i++) {
		cin >> masiv2[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << masiv[i] << " = " << masiv2[i] << endl;
	}
	system("pause");
}