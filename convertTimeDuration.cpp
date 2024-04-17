// Writing a program that given the time duration from hours, minutes and seconds to seconds
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int hours, minutes, seconds, duration;
    // Prompt and output
    cout << "Enter the hour (s) of the time: ";
    cin >> hours;
    cout << "Enter the minute (s) of the time: ";
    cin >> minutes;
    cout << "Enter the second (s) of the time: ";
    cin >> seconds;
    // Changing the time duration above to seconds
    duration = (hours * 3600) + (minutes * 60) + seconds;
    // Outputting the result to the user
    cout << "The time entered is: " << hours << ":" << minutes << ":" << seconds << endl;
    cout << "Therefore, the time duration in seconds is " << duration << endl;
    return 0;
}