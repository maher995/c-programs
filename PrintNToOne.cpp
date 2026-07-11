#include <iostream>
#include <string>

using namespace std;

void PrintNToOne(int N) {

	int i = N;
	while (i >= 1) {
		cout << i << endl;
		i--;
	}

	//for (int i = N; i >= 1; i--) {
	//	cout << i << endl;
	//}

}

int main() {

	int N;

	cout << "enter N: " << endl;
	cin >> N;

	PrintNToOne(N);



	return 0;
}