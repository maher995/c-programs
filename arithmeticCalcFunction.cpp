#include <iostream>
#include <string>

using namespace std;

int calculation(int num1, int num2, char op) {

	switch (op) {

	case '+':
		return num1 + num2;

	case '-':
		return num1 - num2;

	case '*':
		return num1 * num2;

	case '/':
		return num1 / num2;
	default:
		return 0;
	}
}



int main() {

	cout << "Output = " << calculation(10, 20, '*') << endl;

	return 0;
}