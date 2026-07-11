#include <iostream>
#include <string>

using namespace std;

void ReadMarks(int marks[3]) {
    cout << "Enter 1st mark: ";
    cin >> marks[0];

    cout << "Enter 2nd mark: ";
    cin >> marks[1];

    cout << "Enter 3rd mark: ";
    cin >> marks[2];
}

int Avg(int marks[3]) {
    ReadMarks(marks);
    int avg = (marks[0] + marks[1] + marks[2]) / 3;
    return avg;
}

void PrintPassOrFail(int marks[3]) {
    int avg = Avg(marks);
    cout << avg << endl;
    if (avg >= 50) {
        cout << "Pass" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
}


int main() {
	 
	int marks[3];
    PrintPassOrFail(marks);

	return 0;
}
