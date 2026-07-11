#include <iostream>
using namespace std;

void areaOfCircleByNotionOfDescribedTriangle(float a, float b, float c) {
    float const PI = 3.14;
    float area, p;

    p = (a + b + c) / 2;
    area = PI * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
    
    cout << endl;
    cout << "area of circle = " << round(area) << endl;

}

int main()
{
    cout << "this program calculates area of circle" << endl;
    cout << "by the notion of described triangle" << endl;
    cout << endl;

    areaOfCircleByNotionOfDescribedTriangle(5, 6, 7);

    return 0;
}