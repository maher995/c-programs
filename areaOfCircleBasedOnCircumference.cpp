
#include <iostream>
#include <cmath>

using namespace std;

void areaOfCircleBasedOnCircumference(float circumference) {
    float const PI = 3.14;
    float area = (pow(circumference,2)) / (4 * PI);
    cout << "Area of circle = " << floor(area) << endl;


}
int main()
{
    areaOfCircleBasedOnCircumference(20);

    return 0;
}
