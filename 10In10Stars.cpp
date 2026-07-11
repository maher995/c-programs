#include <iostream>
#include <string>

using namespace std;

void Stars() {

	for (int i = 10; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {

	Stars();

	return 0;
}