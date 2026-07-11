#include <iostream>
using namespace std;

void numOfDaysHoursMinutesSecondsBasedOnTotalSeconds(int totalSeconds) {
    int secondsPerDay = 24 * 60 * 60;
    int secondsPerHour = 60 * 60;
    int secondsPerMinute = 60;


    int numberOfDays = floor(totalSeconds / secondsPerDay);
    int remainder = totalSeconds % secondsPerDay;

    int numberOfHours = floor(remainder / secondsPerHour);
    remainder = remainder % secondsPerHour;

    int numberOfMinutes = floor(remainder / secondsPerMinute);
    remainder = remainder % secondsPerMinute;

    int numberOfSeconds = remainder;

    cout << endl;

    cout << "num of days: " << numberOfDays << "\nnum of hours: " << numberOfHours << endl;
    cout << "num of minutes: " << numberOfMinutes << "\nnum of seconds: " << numberOfSeconds << endl;
}
int main()
{
    
    numOfDaysHoursMinutesSecondsBasedOnTotalSeconds(193535);

    return 0;
}
