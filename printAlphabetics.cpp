#include <iostream>
#include <string>

using namespace std;

void PrintAlphabetics() {

	int i = 65;

	while (i <= 90) {
		
		cout << char(i) << endl;
		i++;
	}

	//for (int i = 65; i <= 90; i++) {
	//	cout << char(i) << endl;
	//}
}

int main() {

	PrintAlphabetics();

	return 0;
}