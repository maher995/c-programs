#include <iostream>
#include <cmath>

using namespace std;

void areaOfRectangleBasedOnDiagonal(float side, float diagonal) {
	float area = side * sqrt(pow(diagonal, 2) - pow(side, 2));

	cout << endl;
	cout << "area of rectangle = " << area << endl;
	cout << endl;
}

int main() {

	cout << "this program calculates area of rectangle." << endl;

	cout << endl;

	areaOfRectangleBasedOnDiagonal(5, 40);


	return 0;
};