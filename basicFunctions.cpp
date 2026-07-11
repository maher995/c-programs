#include <iostream>
#include <string>

using namespace std;

void displayMyCardInfo() {

	std::cout << "**************************" << std::endl;
	std::cout << "Name: Maher Abbas." << std::endl;
	std::cout << "Age: 23 years." << std::endl;
	std::cout << "City: Jeddah." << std::endl;
	std::cout << "Country: Saudi Arabia." << std::endl;
	std::cout << "**************************" << std::endl;

}

void printSquareStars() {

	std::cout << "*********" << std::endl;
	std::cout << "*********" << std::endl;
	std::cout << "*********" << std::endl;
	std::cout << "*********" << std::endl;

}

void printILoveProgramming() {

	std::cout << "I Love Programming!\n\n";
	std::cout << "I promise to be the best developer ever!\n\n";
	std::cout << "I know it will take some time to practice, but I\nwill achieve my goal.\n\n";
	std::cout << "Best Regards,\nMaher Abbas.\n";
}

void printH() {

	std::cout << "*       *\n";
	std::cout << "*       *\n";
	std::cout << "*********\n";
	std::cout << "*       *\n";
	std::cout << "*       *\n";
	std::cout << "*       *\n";

}

int main() {
	
	displayMyCardInfo();
	cout << endl;

	printSquareStars();
	cout << endl;

	printILoveProgramming();
	cout << endl;

	printH();


	return 0;

};