#include <iostream>
using namespace std;

int main() {

	int pennies, nickels, dimes, quarters, dollars;

	cout << "enter pennies: " << endl;
	cin >> pennies;

	cout << "enter nickels: " << endl;
	cin >> nickels;

	cout << "enter dimes: " << endl;
	cin >> dimes;

	cout << "enter quarters: " << endl;
	cin >> quarters;

	cout << "enter dollars: " << endl;
	cin >> dollars;

	int totalPennies = pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;

	float totalDollars = (float) totalPennies / 100;

	cout << endl;

	cout << totalPennies << " Pennies" << endl;
	cout << totalDollars << " Dollars" << endl;

	return 0;
}