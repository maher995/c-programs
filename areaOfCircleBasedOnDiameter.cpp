#include <iostream>
using namespace std;

void areaOfCircleBasedOnDiameter(float diameter) {
    
    float const PI = 3.14;
    float area = (diameter * diameter * PI) / 4;
    cout << "area of circle = " << ceil(area) << endl;
}

int main()
{

    areaOfCircleBasedOnDiameter(10);

    

    return 0;
}