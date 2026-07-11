#include <iostream>
#include <string>

using namespace std;



int main() {

	int counter = 3;
	int PIN = 0;
	int balance = 7500;

	cout << "enter PIN: " << endl;
	cin >> PIN;

	while (counter > 1 && PIN != 1234) {
		cout << "Wrong PIN" << endl << endl;
		cout << "enter PIN: " << endl;
		cin >> PIN;
		counter--;
	}
	if (PIN == 1234) {
		cout << "your balance is: " << balance << endl;
	}

	return 0;
}