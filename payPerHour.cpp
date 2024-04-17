// Writing a program that calculates a regular hourly pay of an employee
#include <iostream>
using namespace std;

// Main function 
int main () {
    // Declaring variables to store the extra hours and weekly rate
    int extraHours;
    double weeklyRate;
    // Prompt the user to enter the number of extra hours worked and the weekly rate
    cout << "Enter the number of extra hours: ";
    cin >> extraHours;
    cout << "Enter the weekly rate: ";
    cin >> weeklyRate;
    // calculating the regular pay for 40 hours using a constant hourly rate
    const int regularHours = 40;
    const double regularPay = regularHours * weeklyRate;
    // Calculating the overtime pay for any additional hours worked using a 60% increase in hourly rate
    const double overtimePay = (extraHours * 1.6 * weeklyRate);
    // Calculating total payment by adding regular pay and overtime pay together
    const double totalPayment = regularPay + overtimePay;
    // Printing the output
    cout << "Total Payment: " << "$" << totalPayment << endl;
    return 0;
}