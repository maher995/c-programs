#include <iostream>
using namespace std;

int main() {


	string name = "Maher Abbas";
	short age = 23;
	string city = "Jeddah";
	string country = "Saudi Arabia";
	short monthlySalary = 5000;
	int yearlySalary = monthlySalary * 12;
	char gender = 'M';
	bool marriageState = true;

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