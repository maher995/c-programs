#include <iostream>
#include <string>

using namespace std;

void PassOrFail() {
	short mark;
	cout << "enter mark: " << endl;
	cin >> mark;

	if (mark >=50) {
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}
}


int main() {
	 
	PassOrFail();

	return 0;
}
