#include <iostream>
#include <string>

using namespace std;

void HiredOrRejected() {
	short age;
	bool hasDriverLicense;
	cout << "enter age: " << endl;
	cin >> age;

	cout << "enter hasDriverLicense: " << endl;
	cin >> hasDriverLicense;

	if (age > 21 && hasDriverLicense == true) {
		cout << "Hired";
	}
	else {
		cout << "Rejected";
	}
}


int main() {
	 
	HiredOrRejected();

	return 0;
}