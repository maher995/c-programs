#include <iostream>
#include <string>

using namespace std;

void CalcCommission() {
	float totalSales;
	float percentage, totalCommission;

	cout << "enter total sales: " << endl;
	cin >> totalSales;

	if (totalSales >= 1000000) {
		percentage = 0.01;
		totalCommission = percentage * totalSales;
	}
	else if (totalSales >= 5000000) {
		percentage = 0.02;
		totalCommission = percentage * totalSales;
	}
	else if (totalSales >= 100000) {
		percentage = 0.03;
		totalCommission = percentage * totalSales;
	}
	else if (totalSales >= 50000) {
		percentage = 0.05;
		totalCommission = percentage * totalSales;
	}
	else {
		totalCommission = 0;
	}
	cout << "Total Commission = " << totalCommission << endl;
}


int main() {

	CalcCommission();

	return 0;
}
