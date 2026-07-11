#include <iostream>
using namespace std;

int main()
{
    int loanAmount, monthlyPayment;

    cout << "this program gives total of months till loan amount is paid." << endl;
   
    cout << endl;

    cout << "enter loan amount: " << endl;
    cin >> loanAmount;

    cout << "enter monthly payment: " << endl;
    cin >> monthlyPayment;

    cout << endl;

    int totalMonths = ceil(loanAmount / monthlyPayment);

    cout << totalMonths << " Months is the total months for payment." << endl;


    return 0;
}
