#include <iostream>
#include <string>

using namespace std;

void PrintNumbersDecrement() {

	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}

int main() {

	PrintNumbersDecrement();

	return 0;
}
