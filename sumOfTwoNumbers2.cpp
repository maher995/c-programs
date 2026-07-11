#include <iostream>
using namespace std;

int main() {

	short num1;
	short num2;
	short num3;

	cout << "enter 1st number: " << endl;
	cin >> num1;

	cout << "enter 2nd number: " << endl;
	cin >> num2;

	cout << "enter 3rd number: " << endl;
	cin >> num3;

	cout << endl;

	short sum = num1 + num2 + num3;

	cout << num1 << " +" << endl;
	cout << num2 << " +" << endl;
	cout << num3 << endl << endl;
	cout << "---------------------------------" << endl << endl;
	cout << "Total = " << sum << endl;

	return 0;
}