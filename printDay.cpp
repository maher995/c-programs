#include <iostream>
#include <string>

using namespace std;

string PrintDay(short day) {

	switch (day) {

	case 1:
		return "Sunday";
		break;

	case 2:
		return "Monday";
		break;

	case 3:
		return "Tuesday";
		break;

	case 4:
		return "Wednesday";
		break;

	case 5: 
		return "Thursday";
		break;

	case 6:
		return "Friday";
		break;

	case 7:
		return "Saturday";
		break;

	default:
		return "Wrong day of the week";
	}

	
}

int main() {

	cout << PrintDay(1) << endl;

	return 0;
}
