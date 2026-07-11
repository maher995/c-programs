#include <iostream>
#include <string>

using namespace std;

struct strInfo {
	string firstName;
	string lastName;
	short age;
	string phone;
};

void ReadInfo(strInfo& info) {
	cout << "enter first name: " << endl;
	cin >> info.firstName;

	cout << "enter last name: " << endl;
	cin >> info.lastName;

	cout << "enter age: " << endl;
	cin >> info.age;

	cout << "enter phone: " << endl;
	cin >> info.phone;

	cout << "\n\n";

}

void PrintInfo(strInfo info) {

	cout << "\n*******************************\n";

	cout << "FirstName: " << info.firstName << endl;
	cout << "LastName: " << info.lastName << endl;
	cout << "Age: " << info.age << endl;
	cout << "Phone: " << info.phone << endl;

	cout << "\n*******************************\n";


}

void ReadPersonsInfo(strInfo Persons[100], int &Length) {
	
	cout << "How many persons?\n";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++) {

		cout << "Please Enter Person's " << i + 1 << " Info: \n";
		ReadInfo(Persons[i]);
	}
}

void PrintPersonsInfo(strInfo Persons[100], int Length) {

	for (int i = 0; i <= Length - 1; i++) {

		cout << "Person's " << i + 1 << " Info: \n";
		PrintInfo(Persons[i]);
	}
}


int main() {

	strInfo Persons[100];
	int NumberOfPersons = 1;

	ReadPersonsInfo(Persons, NumberOfPersons);
	PrintPersonsInfo(Persons, NumberOfPersons);

	return 0;
}
