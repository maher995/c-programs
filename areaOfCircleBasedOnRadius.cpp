#include <iostream>
#include <cmath>

using namespace std;

void areaOfCircle(float radius) {
	const float PI = 3.14;
	float area;

	area = PI * pow(radius, 2);
	cout << "area of circle = " << ceil(area) << endl;

}

int main() {


	cout << "this program calculates area of circle." << endl;

	areaOfCircle(5);


	return 0;
}