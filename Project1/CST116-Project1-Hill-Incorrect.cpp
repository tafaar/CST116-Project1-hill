/*
* CST 116, Aaron Hill, aaron.hill@oit.edu
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int numStudents = 4;

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

			cout << name << " has an income of " << income << " and a GPA of " << gpa << endl;
			break;

		case 1:

			cout << name << " has an income of " << income << " and is " << age << " years old." << endl;
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

	for (int i = 0; i < numStudents; i++) {
		studentsPartOne[i].printDetails(0);
	}

	cout << endl;

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter the name, income, and age for student #" << i + 1 << endl;
		cin >> studentsPartTwo[i].name >> studentsPartTwo[i].income >> studentsPartTwo[i].age;
	}

	cout << endl;

	for (int i = 0; i < numStudents; i++) {
		studentsPartTwo[i].printDetails(1);
	}

	return 0;
}