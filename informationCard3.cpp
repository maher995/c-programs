#include <iostream>
using namespace std;

int main() {


	string name;
	short age;
	string city;
	string country;
	short monthlySalary;
	char gender;
	bool marriageState;

	cout << "enter name: " << endl;
	cin >> name;

	cout << "enter age: " << endl;
	cin >> age;

	cout << "enter city: " << endl;
	cin >> city;

	cout << "enter country: " << endl;
	cin >> country;

	cout << "enter monthly salary: " << endl;
	cin >> monthlySalary;

	cout << "enter gender: " << endl;
	cin >> gender;

	cout << "enter isMarried: " << endl;
	cin >> marriageState;

	int yearlySalary = monthlySalary * 12;


	cout << "****************************" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << " years." << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << monthlySalary << endl;
	cout << "Yearly Salary: " << yearlySalary << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << marriageState << endl;
	cout << "****************************" << endl;


	return 0;
}