#include <iostream>
#include <string>

using namespace std;

void mySumProcedure() {

	int num1, num2;

	cout << "Please enter Number1?" << endl;
	cin >> num1;

	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> num2;

	int sum = num1 + num2;

	cout << "************************\n";
	cout << sum;
	cout << endl;
}

int mySumFunction() {

	int num1, num2;

	cout << "Please enter Number1?" << endl;
	cin >> num1;

	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> num2;

	cout << endl;

	return num1 + num2;
}

int main() {
	
	mySumProcedure();
	cout << endl;
	cout << mySumFunction() << endl;
	
	return 0;

};