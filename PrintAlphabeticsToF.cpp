#include <iostream>
#include <string>

using namespace std;

void PrintAlphabeticsToF() {

	for (int i = 65; i <= 70; i++) {

		for (int j = 65; j <= i; j++) {

			cout << char(j) << " ";
		}
		cout << endl;
	}
}

int main() {

	PrintAlphabeticsToF();

	return 0;
}
