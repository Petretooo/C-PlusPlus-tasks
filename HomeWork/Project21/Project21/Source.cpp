/*  С ФУНКЦИИ
В един университет се прави малка програма за работа със студенти.
Всеки студент се описва с име, факултетен номер, курс (число от 1 до 4)
и (средно-аритметичен) успех.
Изведете информация за:
1. всички студенти;
2. студенти, които имат успех под 3.50 от 2-ри курс;
3. студентите с максимален и минимален успех от 3-ти курс;
4. за всеки курс средните успехи.
*/

// Вариант с функции

#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
using namespace std;

// Със структура е по-удобно и по-лесно
// глобална дефиниция
struct Student {
	string name;
	string FacNo;
	int Course;
	float Uspeh;
};

void EnterStudents(Student Students[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter information for student " << i << endl;
		cout << " Name: ";
		cin.get();  // скипваме бурферната зона при компилиране
		getline(cin, Students[i].Name);
		cout << " Fac number: ";
		getline(cin, Students[i].FacNo);
		cout << " Course: ";
		cin >> Students[i].Course;
		cout << " Uspeh: ";
		cin >> Students[i].Uspeh;
	}
}


void PrintStudent(Student aStudent, int NumberBy)
{
	cout << "Student " << NumberBy << ":"
		<< " Name: " << aStudent.Name
		<< " Fac number: " << aStudent.FacNo
		<< " Course: " << aStudent.Course
		<< " Uspeh: " << aStudent.Uspeh << endl;
}

void PrintAllStudents(Student Students[], const int size) // функция с указатели
//нужна е малко фиксиране при фактическите параметри на функцията с масива,
//но ще се оправи
{
	cout << "1. Information for all students: " << endl;
	for (int i = 0; i < size; i++)
	{
		PrintStudent(Students[i], i);
	}
}

float MinimalGradeFromCourse(Student Students[], const int size, int aCourse)
{
	float minUspeh = 0;
	for (int i = 0; i < size; i++)
	{
		if (Students[i].Course == aCourse)
		{
			// ако е 1-вия от този курс - запомняме
			if (minUspeh == 0)
				minUspeh = Students[i].Uspeh;
			// проверяваме
			if (Students[i].Uspeh < minUspeh)
				minUspeh = Students[i].Uspeh;
		}
	}
	return minUspeh;
}


float MaximallGradeFromCourse(Student Students[], const int size, int aCourse)
{
	float maxUspeh = 0;
	for (int i = 0; i < size; i++)
	{
		if (Students[i].Course == aCourse)
		{
			// ако е 1-вия от този курс - запомняме
			if (maxUspeh == 0)
				maxUspeh = Students[i].Uspeh;
			// проверяваме
			if (Students[i].Uspeh > maxUspeh)
				maxUspeh = Students[i].Uspeh;
		}
	}
	return maxUspeh;
}

float AverageGradeFromCourse(Student Students[], const int size, int aCourse)
{
	float sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++)
		if (Students[i].Course == aCourse)
		{
			count++;
			sum += Students[i].Uspeh;
		}
	if (count == 0)
		return 0;
	else
		return sum / count;
}

void PrintAverageGradeFromCourse(float Average, int aCourse)
{
	if (Average > 0)
		cout << " Course " << aCourse << ": " << Average << endl;
	else
		cout << " Course " << aCourse << ": has no students " << endl;
}

int main()
{
	const int n = 50;

	Student Students[n];

	int array[n];

	int x;  // работим с х студента

	do {
		cout << "Broi studenti (5..50): ";
		cin >> x;
	} while (x < 5 || x > 50); // приемаме само между 5 и 50


	EnterStudents(Students, x);

	// 1. всички студенти
	PrintAllStudents(Students, x);

	// 2. студенти, които имат успех под 3.50 от 2 - ри курс;
	cout << "2. Students with grade less than 3.50 from 2-nd course: " << endl;
	for (int i = 0; i < x; i++)
	{
		if (Students[i].Uspeh < 3.50 && Students[i].Course == 2)
			PrintStudent(Students[i], i);
	}

	// 3. студентите с максимален и минимален успех от 3 - ти курс;
	cout << "3.1. Students with minimal grade from 3-rd course: " << endl;
	float max3, min3;
	min3 = MinimalGradeFromCourse(Students, x, 3);
	max3 = MaximallGradeFromCourse(Students, x, 3);
	for (int i = 0; i < x; i++)
	{
		if (Students[i].Uspeh == min3 && Students[i].Course == 3)
			PrintStudent(Students[i], i);
	}
	cout << "3.2. Students with maximal grade from 3-rd course: " << endl;
	for (int i = 0; i < x; i++)
	{
		if (Students[i].Uspeh == max3 && Students[i].Course == 3)
			PrintStudent(Students[i], i);
	}

	// 4. за всеки курс средните успехи
	cout << "4. Average grades for course: " << endl;
	for (int course = 1; course <= 4; course++)
		PrintAverageGradeFromCourse(AverageGradeFromCourse(Students, x, course), course);

	return 0;
}