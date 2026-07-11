
#include <iostream>
#include <cmath>

using namespace std;

void numToPowerOf234(float num) {
    cout << num << "^2 = " << pow(num, 2) << endl;
    cout << num << "^3 = " << pow(num, 3) << endl;
    cout << num << "^4 = " << pow(num, 4) << endl;
}

int main()
{
    numToPowerOf234(3);
    return 0;
}