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
	int age = 0;
	float gpa = 0;
	
	void printDetails() {
		cout << name << " is " << age << " years old and has a GPA of " << gpa << endl;
	};
};

student students[4];

int main() {

	for (int i = 0; i < 4; i++) {
		cout << "Please enter the name, age, and GPA for student #" << i + 1 << endl;
		cin >> students[i].name >> students[i].age >> students[i].gpa;
	}

	for (int i = 0; i < 4; i++) {
		cout << students[i].name << " is " << students[i].age << " years old with a GPA of " << students[i].gpa << endl;
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