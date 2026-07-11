#include <iostream>
#include <string>

using namespace std;

struct strInfo {
	string name;
	short age;
	string city;
	string country;
	float monthlySalary;
	float yearlySalary;
	char gender;
	bool isMarried;

};

void ReadInfo(strInfo &info) {

	cout << "enter name: " << endl;
	getline(cin, info.name);

	cout << "enter age: " << endl;
	cin >> info.age;

	cout << "enter city: " << endl;
	cin >> info.city;

	cout << "enter country: " << endl;
	cin.ignore(1, '\n');
	getline(cin, info.country);

	cout << "enter monthly salary: " << endl;
	cin >> info.monthlySalary;

	cout << "enter yearly salary: " << endl;
	cin >> info.yearlySalary;

	cout << "enter gender: " << endl;
	cin >> info.gender;

	cout << "enter isMarried?" << endl;
	cin >> info.isMarried;
}

void PrintInfo(strInfo info) {
	cout << "\n********************************\n";
	cout << "Name: " << info.name << endl;
	cout << "Age: " << info.age << endl;
	cout << "City: " << info.city << endl;
	cout << "Country: " << info.country << endl;
	cout << "Monthly Salary: " << info.monthlySalary << endl;
	cout << "Yearly Salary: " << info.yearlySalary << endl;
	cout << "Gender: " << info.gender << endl;
	cout << "isMarried: " << info.isMarried << endl;
	cout << "\n*********************************\n";
}

int main() {

	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
	


	return 0;
}
