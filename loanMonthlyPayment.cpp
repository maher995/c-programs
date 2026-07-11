#include <iostream>
using namespace std;

int main() {

	cout << "this program gives you the monthly payment of a loan." << endl;

	int loanAmount, totalMonths;

	cout << "enter loan amount: " << endl;
	cin >> loanAmount;

	cout << "enter total months to settle the loan: " << endl;
	cin >> totalMonths;

	float monthlyInstallment = (float)loanAmount / totalMonths;

	cout << "monthly installment = " << monthlyInstallment << endl;

	return 0;
}