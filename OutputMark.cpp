#include <iostream>
#include <string>

using namespace std;

void OutputMark() {
	short grade;

	cout << "enter grade: " << endl;
	cin >> grade;
	
	if (grade > 100 || grade < 0) {
		cout << "Invalid Grade" << endl;
	}
	else if (grade >= 90) {
		cout << 'A' << endl;
	}
	else if (grade >= 80) {
		cout << 'B' << endl;
	}
	else if (grade >= 70) {
		cout << 'C' << endl;
	}
	else if (grade >= 60) {
		cout << 'D' << endl;
	}
	else {
		cout << 'F' << endl;
	}
}

int main() {

	OutputMark();
	
	return 0;
}
