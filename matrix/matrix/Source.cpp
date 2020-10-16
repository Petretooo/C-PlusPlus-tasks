#include<iostream>
#include<fstream>
#include<String>
#include<sstream>
using namespace std;

string readFromFile();
int main() {
	ofstream createFile;
	createFile.open("createFile.txt");
	string info = readFromFile();
	istringstream splite(info);
	string num;

	string matrix[5][5];
	cout << "Original Matrix:\n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			getline(splite, num, ' ');
			matrix[i][j] = num;
			cout << matrix[i][j] + " ";
			//createFile << matrix[i][j] + " ";
		}
		cout << "\n";
		//createFile << "\n";
	}
	
	string reverseMatrix[5][5];
	createFile << "Reversed Matrix\n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			reverseMatrix[j][i] = matrix[i][j];
		}
	}

	cout << "\n";
	cout << "Reversed Matrix:\n";
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << reverseMatrix[i][j] + " ";
			createFile << reverseMatrix[i][j] + " ";
		}
		cout << "\n";
		createFile << "\n";
	}
}


string readFromFile() {
	string info;
	ifstream file;
	file.open("example.txt");
	cout << "Data:\n";
	while (getline(file, info)) {
		cout << info << '\n';
	}
	cout << "\n";
	file.close();
	return info;
}