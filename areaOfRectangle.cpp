#include <iostream>
using namespace std;

float areaOfRectangle(float width, float height) {

	return width * height;
}

int main() {

	float width, height;

	cout << "enter width of rectangle: " << endl;
	cin >> width;

	cout << endl;

	cout << "enter height of rectangle: " << endl;
	cin >> height;

	cout << endl;

 	cout << "area of rectangle = ";
	cout << areaOfRectangle(width, height) << endl;

	return 0;
}