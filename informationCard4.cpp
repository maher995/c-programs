#include <iostream>
using namespace std;

struct person 
{
	string name;
	short age;
	string city;
	string country;
	float monthlySalary;
	float yearlySalary;
	char gender;
	bool isMarried;
};

	int main() {

		person person1;

		cout << "enter name: " << endl;
		cin >> person1.name;

		cout << "enter age: " << endl;
		cin >> person1.age;

		cout << "enter city: " << endl;
		cin >> person1.city;

		cout << "enter country: " << endl;
		cin >> person1.country;

		cout << "enter monthly salary: " << endl;
		cin >> person1.monthlySalary;

		cout << "enter yearly salary: " << endl;
		cin >> person1.yearlySalary;

		cout << "enter gender: " << endl;
		cin >> person1.gender;

		cout << "enter isMarried: " << endl;
		cin >> person1.isMarried;
		

		cout << "****************************" << endl;
		cout << "Name: " << person1.name << endl;
		cout << "Age: " << person1.age << " years." << endl;
		cout << "City: " << person1.city << endl;
		cout << "Country: " << person1.country << endl;
		cout << "Monthly Salary: " << person1.monthlySalary << endl;
		cout << "Yearly Salary: " << person1.yearlySalary << endl;
		cout << "Gender: " << person1.gender << endl;
		cout << "Married: " << person1.isMarried << endl;
		cout << "****************************" << endl;


		return 0;

	};