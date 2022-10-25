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

// Creating a class named student with a member function to print out its details.

class student {

public:

	// Variables for the student class

	string name;
	double income = 0;
	float gpa = 0;
	int age = 0;
	
	void printDetails(int choice) {

		// Switch case for internal use to determine which message to output during the program.

		switch (choice)
		{

		case 0:
			cout << left << setw(headerWidth) << name << setw(headerWidth) << income  << setw(headerWidth) << gpa << endl;
			break;

		case 1:

			cout << left << setw(headerWidth) << name << setw(headerWidth) << income << setw(headerWidth) << age << endl;
			break;

		}
	};
};

int main() {

	// Creating 2 arrays for students, one for part 1 and part 2.

	student studentsPartOne[numStudents];
	student studentsPartTwo[numStudents];

	// Using a manipulator and member function to format the text output.

	cout << std::fixed;
	cout.precision(2);

	// Take the user's input 4 times and put their inputs into the corresponding student data for part 1.

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter the name, income, and GPA for student #" << i + 1 << endl;
		cin >> studentsPartOne[i].name >> studentsPartOne[i].income >> studentsPartOne[i].gpa;
	}

	cout << endl;

	// Manipulators setting up the output formatting; print the headers and then the data for each student in part 1 using a member function.

	cout << left << setw(headerWidth) << "Name" << setw(headerWidth) << "Income" << setw(headerWidth) << "GPA" << endl;

	for (int i = 0; i < numStudents; i++) {
		studentsPartOne[i].printDetails(0);
	}

	cout << endl;

	// Take the user's input 4 times and put their inputs into the corresponding student data for part 2.

	for (int i = 0; i < numStudents; i++) {
		cout << "Please enter the name, income, and age for student #" << i + 1 << endl;
		cin >> studentsPartTwo[i].name >> studentsPartTwo[i].income >> studentsPartTwo[i].age;
	}

	cout << endl;

	// Manipulators setting up the output formatting; print the headers and then the data for each student in part 2 using a member function.

	cout << left << setw(headerWidth) << "Name" << setw(headerWidth) << "Income" << setw(headerWidth) << "Age" << endl;

	for (int i = 0; i < numStudents; i++) {
		studentsPartTwo[i].printDetails(1);
	}

	return 0;
}