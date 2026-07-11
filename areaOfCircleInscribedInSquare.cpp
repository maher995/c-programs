
#include <iostream>
#include <cmath>
using namespace std;

void areaOfCircleInscribedInSquare(float sideOfSquare) {
    
    const float PI = 3.14;
    float area = (PI * pow(sideOfSquare,2) )/ 4;
    cout << "Area of circle = " << ceil(area) << endl;

}
int main()
{
    areaOfCircleInscribedInSquare(10);

    return 0;
}