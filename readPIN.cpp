#include <iostream>
#include <string>

using namespace std;

void ReadPIN() {
	short PIN;
	int balance = 7500;
	cout << "enter PIN: " << endl;
	cin >> PIN;

	if (PIN == 1234) {
		cout << "Your Balance is: " << balance << endl;
	}
	else {
		cout << "Wrong PIN" << endl;
	}
}


int main() {
	
	ReadPIN();
	
	
	return 0;
}