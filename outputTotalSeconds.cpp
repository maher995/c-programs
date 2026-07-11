#include <iostream>
using namespace std;

int totalSeconds(int days, int hours, int minutes, int seconds) {
    int totalSeconds = (days * 24 * 3600) + (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}
int main()
{
    
    cout << "Total seconds = " << totalSeconds(2,5,45,35) << " seconds" << endl;


    return 0;
}

