
#include <iostream>
using namespace std;

int main()
{
    int totalBill, cashPaid, reminder;

    cout << "enter total bill: " << endl;
    cin >> totalBill;

    cout << "enter cash paid: " << endl;
    cin >> cashPaid;

    reminder = cashPaid - totalBill;
    cout << endl;

    cout << "reminder = " << reminder << endl;

    return 0;
}