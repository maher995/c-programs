
#include <iostream>
using namespace std;

int main()
{
    float BillValue;
    float totalBill;

    cout << "enter bill value: " << endl;
    cin >> BillValue;

    cout << endl;

    totalBill = BillValue * 1.1;
    totalBill = totalBill * 1.16;

    cout << "total bill = " << totalBill << endl;

    return 0;
}
