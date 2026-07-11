#include <iostream>
#include <string>

using namespace std;

void PrintOneToN(int N) {

	int i = 1;
	while (i <= N) {
		cout << i << endl;
		i++;
	}

	//for (int i = 1; i <= N; i++) {
	//	cout << i << endl;
	//}

}

int main() {

	int N;

	cout << "enter N: " << endl;
	cin >> N;

	PrintOneToN(N);



	return 0;
}
