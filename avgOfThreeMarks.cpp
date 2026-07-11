
#include <iostream>
using namespace std;

int main()
{
    int mark1;
    int mark2;
    int mark3;

    cout << "enter first mark: " << endl;
    cin >> mark1;

    cout << "enter second mark: " << endl;
    cin >> mark2;

    cout << "enter third mark: " << endl;
    cin >> mark3;

    cout << endl;

    cout << "the average of three marks = " << (mark1 + mark2 + mark3) / 3 << endl;

    return 0;
}