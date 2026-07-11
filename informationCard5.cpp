#include <iostream>
using namespace std;

enum myFavColor { Yellow, Green, Red };
enum Gender {Male, Female};
enum Status {Single, Married};

int main() {
	
	Status myStatus;
	Gender myGender;
	myFavColor myFavoriteColor;

	myFavoriteColor = myFavColor::Green;

	myGender = Gender::Male;

	myStatus = Status::Single;

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
	cout << "Gender: " << myGender << endl;
	cout << "Married: " << myStatus << endl;
	cout << "My Favourite Color: " << myFavoriteColor << endl;
	cout << "****************************" << endl;

	
	return 0;

};