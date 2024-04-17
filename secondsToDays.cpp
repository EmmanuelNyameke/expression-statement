// Writing a program that changes seconds to days, hours, minutes, and seconds
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int seconds, days, hours, minutes, secs;
    // Prompt and output
    cout << "Enter the seconds: ";
    cin >> seconds;
    // Changing the seconds to days, hours, minutes and seconds
    days = seconds / 86400;
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    secs = (seconds % 3600) % 60;
    // Outputting the result to the user
    cout << "Seconds Entered: " << seconds << endl;
    cout << "Therefore, " << seconds << " to days, hours, minutes and seconds is " << days << " day(s), " << hours << " hour(s), " << minutes << " minute(s), " << secs << " second(s)." << endl;
    return 0;
}