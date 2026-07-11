#include <iostream>
using namespace std;

int main()
{
    
    int base, height;

    cout << "enter length of base of triangle: " << endl;
    cin >> base;

    cout << "enter height of triangle: " << endl;
    cin >> height;

    int area = 0.5 * base * height;

    cout << endl;

    cout << "area of triangle = " << area << endl;

    return 0;
}
