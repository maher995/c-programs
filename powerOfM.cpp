#include <iostream>
#include <string>

using namespace std;

int Power(int num, int M) {

	int P = num;

	while (M > 1) {
		P = P * num;
		M--;
	}

	//for (M; M > 1; M--) {// m=2
	//	P = P * num; // p = 4, P = 8, P = 16
	//}

	return P;
}

int main() {

	cout << Power(3, 3) << endl;



	return 0;
}