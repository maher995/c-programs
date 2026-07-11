#include <iostream>
#include <string>

using namespace std;

int SumEvenNumbersFromOneToN(int N) {

	int sum = 0;

	int i = 0;
	
	while (i <= N) {
		
		sum = sum + i;
		i += 2;
	}

	//for (int i = 0; i <= N; i += 2) {
	//	sum = sum + i;
	//}

	return sum;

}

int main() {

	int N;

	cout << "enter N: " << endl;
	cin >> N;

	cout << SumEvenNumbersFromOneToN(N) << endl;


	return 0;
}