#include <iostream>
#include <string>

using namespace std;

int Factorial(int N) { //5

	int fact = 1; //1

	while (N >= 1) {

		fact = fact * N;
		N--;
	}

	//for (N; N >= 1; N--) {// n=0

	//	fact = fact * N; // fact = 5, fact = 20, fact = 60, fact = 120, fact = 120
	//}

	return fact;

}

int main() {

	int N=-1;

	while (N < 0) {
		cout << "enter N: " << endl;
		cin >> N;
	}

	

	cout << Factorial(N) << endl;

	return 0;
}