#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {

	string name1;
	int age1;
	float gpa1;

	cout << "Hello! Please enter a name." << endl;

	cin >> name1;

	cout << "Now enter your age." << endl;

	cin >> age1;

	cout << "What's your GPA?" << endl;

	cin >> gpa1;

	cout << "Your name is " << name1 << ", you are " << age1 << " years old, and your GPA is " << gpa1 << endl;


	return 0;
}