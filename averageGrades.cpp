#include <iostream>
#include <string>

using namespace std;

void ReadGrades(float grades[3]) {
	
	cout << "Please enter grade1?\n";
	cin >> grades[0];

	cout << "Please enter grade2?\n";
	cin >> grades[1];

	cout << "Please enter grade3?\n";
	cin >> grades[2];
}

float calculateAverageGrades(float grades[3]) {

	return (grades[0] + grades[1] + grades[2]) / 3;
}



int main() {
	 
	float Grades[3];

	ReadGrades(Grades);

	cout << "The Average of grades is " << calculateAverageGrades(Grades) << endl;

	return 0;
}
