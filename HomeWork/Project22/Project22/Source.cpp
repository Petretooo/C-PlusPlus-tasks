#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

struct Student {
	char name[50];
	char FacNo[50];
	int course;
	float uspeh;
};

void enterStudents(Student Students[], const int size);

int main() {
	const int size = 50;
	Student Students[size];





}
void enterStudents(Student Students[], const int size) {
	int i = 0;
	for (i = 0; i < size; i++) {
		printf("Enter information for student %d\n", i);
		printf(" Name: \n");
		scanf("%s", &Students[i].name);
	}
}


