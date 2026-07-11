#include <iostream>
#include <string>

using namespace std;

enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };
int main() {

	cout << "******************************\n";
	cout << "Please choose the number of your country?\n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisa\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "*******************************\n\n";
	cout << "Your Choice? ";

	int c;
	enCountryChoice Country;

	cin >> c;
	Country = enCountryChoice(c);

	if (Country == enCountryChoice::Jordan) {
		cout << "your country is Jordan" << endl;
	}
	else if (Country == enCountryChoice::Tunisa) {
		cout << "your country is Tunisa" << endl;
	}
	else if (Country == enCountryChoice::Algeria) {
		cout << "your country is Algeria" << endl;
	}
	else if (Country == enCountryChoice::Oman) {
		cout << "your country is Oman" << endl;
	}
	else if (Country == enCountryChoice::Egypt) {
		cout << "your country is Egypt" << endl;
	}
	else if (Country == enCountryChoice::Iraq) {
		cout << "your country is Iraq" << endl;
	}
	else if (Country == enCountryChoice::Other) {
		cout << "your country is Other" << endl;
	}

	
	return 0;
}
