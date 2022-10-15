/*
* CST 116, Aaron Hill
*/

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class student {

public:

	string name;
	float income = 0;
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

	student studentsPartOne[4];
	student studentsPartTwo[4];

	for (int i = 0; i < 4; i++) {
		cout << "Please enter the name, income, and GPA for student #" << i + 1 << endl;
		cin >> studentsPartOne[i].name >> studentsPartOne[i].income >> studentsPartOne[i].gpa;
	}

	for (int i = 0; i < 4; i++) {
		studentsPartOne[i].printDetails(0);
	}

	for (int i = 0; i < 4; i++) {
		cout << "Please enter the name, income, and age for student #" << i + 1 << endl;
		cin >> studentsPartTwo[i].name >> studentsPartTwo[i].income >> studentsPartTwo[i].age;
	}

	for (int i = 0; i < 4; i++) {
		studentsPartTwo[i].printDetails(1);
	}

	/*/
	string name1, name2, name3, name4;
	int age1, age2, age3, age4;
	float gpa1, gpa2, gpa3, gpa4;

	cout << "Hello! Please enter 4 names, each separated by a space." << endl;
	cin >> name1 >> name2 >> name3 >> name4;
	cout << "Now enter the age of each of those people, again separated by a space" << endl;
	cin >> age1 >> age2 >> age3 >> age4;
	cout << "Please enter each person's GPA, also separated by a space." << endl;
	cin >> gpa1 >> gpa2 >> gpa3 >> gpa4;

	cout << name1 << " is " << age1 << " years old, and their GPA is " << gpa1 << endl;
	cout << name2 << " is " << age2 << " years old, and their GPA is " << gpa2 << endl;
	cout << name3 << " is " << age3 << " years old, and their GPA is " << gpa3 << endl;
	cout << name4 << " is " << age4 << " years old, and their GPA is " << gpa4 << endl;

	/*/

	return 0;
}