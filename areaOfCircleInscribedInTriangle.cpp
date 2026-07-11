#include <iostream>
using namespace std;

void areaOfCircleInscribedInTriangle(float side, float base) {
    const float PI = 3.14;
    float area;
    
    area = ((PI * base * base) / 4) * ((2 * side - base) / (2 * side + base));

    cout << "area of circle = " << floor(area) << endl;


}


int main()
{
    areaOfCircleInscribedInTriangle(20,10);

    return 0;
}
