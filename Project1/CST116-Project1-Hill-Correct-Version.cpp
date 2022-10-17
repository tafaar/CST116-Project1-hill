/*
* CST 116, Aaron Hill, aaron.hill@oit.edu
*/

#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::left;
using std::setw;

const int numStudents = 4;
const int headerWidth = 15;

class student {

public:

	string name;
	double income = 0;
	float gpa = 0;
	int age = 0;
	
	void printDetails(int choice) {

		switch (choice)
		{

		case 0:
			cout << std::left << setw(headerWidth) << name << setw(headerWidth) << income  << setw(headerWidth) << gpa << endl;
			break;

		case 1:

			cout << std::left << setw(headerWidth) << name << setw(headerWidth) << income << setw(headerWidth) << age << endl;
			break;

		}
	};
};

int main() {

	student studentsPartOne[numStudents];
	student studentsPartTwo[numStudents];

	cout << std::fixed;
	cout.precision(2);

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter the name, income, and GPA for student #" << i + 1 << endl;
		cin >> studentsPartOne[i].name >> studentsPartOne[i].income >> studentsPartOne[i].gpa;
	}

	cout << endl;

	cout << std::left << setw(headerWidth) << "Name" << setw(headerWidth) << "Income" << setw(headerWidth) << "GPA" << endl;

	for (int i = 0; i < numStudents; i++) {
		studentsPartOne[i].printDetails(0);
	}

	cout << endl;

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter the name, income, and age for student #" << i + 1 << endl;
		cin >> studentsPartTwo[i].name >> studentsPartTwo[i].income >> studentsPartTwo[i].age;
	}

	cout << endl;

	cout << std::left << setw(headerWidth) << "Name" << setw(headerWidth) << "Income" << setw(headerWidth) << "Age" << endl;

	for (int i = 0; i < numStudents; i++) {
		studentsPartTwo[i].printDetails(1);
	}

	return 0;
}