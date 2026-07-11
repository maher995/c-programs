#include <iostream>
#include <string>

using namespace std;


int main() {

	int sum = 0, num = 0;

	while (num != -99) {
		sum = sum + num;

		cout << "enter number: " << endl;
		cin >> num;

	}

	cout << "Sum = " << sum << endl;


	return 0;
}