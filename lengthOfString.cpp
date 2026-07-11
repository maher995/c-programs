#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string string1, string2, string3;

	cout << "Please enter String1?" << endl;
	getline(cin, string1);

	cout << endl;

	cout << "Please enter String2?" << endl;
	cin >> string2;

	cout << endl;

	cout << "Please enter String3?" << endl;
	cin >> string3;

	cout << "\n**************************\n" << endl;
	cout << "The Length of String1 is " << string1.length() << endl;
	cout << "Characters at 0,2,4,7 are: " << string1[0] << " " << string1[2] << " " << string1[4] << " " << string1[7] << endl;
	
	cout << "Concatenating String2 and String3 = " << string2 + string3 << endl;

	int num1 = stoi(string2);
	int num2= stoi(string3);
	int multiplication = num1*num2;

	cout << num1 << " * " << num2 << " = " << multiplication << endl;




	return 0;

};