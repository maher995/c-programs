#include <iostream>
#include <string>

using namespace std;

struct strInfo {
	string firstName;
	string lastName;
	short age;
	string phone;
};

void ReadInfo(strInfo  &info) {
	cout << "enter first name: " << endl;
	cin >> info.firstName;

	cout << "enter last name: " << endl;
	cin >> info.lastName;

	cout << "enter age: " << endl;
	cin >> info.age;

	cout << "enter phone: " << endl;
	cin >> info.phone;

}

void PrintInfo(strInfo info) {

	cout << "\n*******************************\n";

	cout << "FirstName: " << info.firstName<< endl;
	cout << "LastName: " << info.lastName << endl;
	cout << "Age: " << info.age << endl;
	cout << "Phone: " << info.phone << endl;

	cout << "\n*******************************\n";


}

void ReadPersonsInfo(strInfo Persons[2]) {
	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);
}

void PrintPersonsInfo(strInfo Persons[2]) {
	
	cout << "\n**********************************\n";
	
	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);
}


int main() {
	
	strInfo Persons[2];

	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);

	return 0;
}