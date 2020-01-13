#include<iostream>
using namespace std;
void Sum(int A[3][3], int B[3][3], int n, int C[3][3]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
}
int main() {
	int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} }; // създаваме двумерен масив А 
	int B[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} }; // създаваме двумерен масив В
	int C[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} }; // създаваме двумерен масив С

	Sum(A, B, 3, C); // извикваме функциявята Sum с нашите данни

	system("pause");

}