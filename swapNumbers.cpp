#include <iostream>
using namespace std;

void swapNumbers(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "result after swapping" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
}

int main()
{

    swapNumbers(3, 5);

    return 0;
}
