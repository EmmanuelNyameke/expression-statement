// Writing a program that output or prints weeks, and days from the hours given
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    double givenHrs, weeks, days;
    // Prompt and output
    cout << "Enter the hours you want to convert: ";
    cin >> givenHrs;
    // Processing........ 168 was gotten from the number of days (7) in a week multiplied by the total hours in a day (24 hours)
    weeks = givenHrs / 168;
    days = givenHrs / 24;
    // Outputting the result
    cout << "Hours Entered: " << givenHrs << " hours" << endl;
    cout << givenHrs << " hours" << " in weeks and days is " << weeks << " weeks, " << days << " days." << endl;
    return 0;
}