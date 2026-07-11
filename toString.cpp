#include <iostream>
#include <string>

using namespace std;


int main() {
	
	string st1 = "43.22";
	int n1 = 20;
	double n2 = 33.5;
	float n3 = 55.23;

	//convert string to double
	double num_double = stod(st1);

	//convert string to float
	float num_float = stof(st1);

	//convert string to int
	int num_int = stoi(st1);

	//convert n1 to string
	string n1_string = to_string(n1);

	//convert n2 to string
	string n2_string = to_string(n2);

	//convert n3 to string
	string n3_string = to_string(n3);

	//convert n3 to integer
	int n3_integer = n3;
	n3_integer = (int)n3;
	n3_integer = int(n3);

	cout << num_double << endl;
	cout << num_float << endl;
	cout << num_int << endl;
	cout << n1_string << endl;
	cout << n2_string << endl;
	cout << n3_string << endl;
	cout << n3_integer << endl;
	

	return 0;

};