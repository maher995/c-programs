#include <iostream>
#include <string>

using namespace std;



int main() {
 
	int num = 0, sum = 0;

	for (int i = 0; i < 5; i++) {

		cout << "enter a number: " << endl;
		cin >> num;

		// continue condition
		if (num > 50) {
			continue;
		}
		sum += num;
	}

	cout << endl << "sum = " << sum << endl;

	return 0;
}
