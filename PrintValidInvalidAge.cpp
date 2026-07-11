#include <iostream>
#include <string>

using namespace std;

void PrintValidInvalidAge() {
	short age;
	cout << "enter age: " << endl;
	cin >> age;

	if (age > 18 && age < 45) {
		cout << "Valid age" << endl;
	}
	else {
		cout << "Invalid age" << endl;
	}
}

int main() {
	 
	PrintValidInvalidAge();
	
	return 0;
}
