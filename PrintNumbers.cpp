#include <iostream>
#include <string>

using namespace std;

void PrintNumbers() {

	for (int i = 1; i <= 10; i++) {

		for (int j = i; j <= 10; j++) {

			cout << j << " ";
		}
		cout << "\n";
	}
}

int main() {

	PrintNumbers();

	return 0;
}
