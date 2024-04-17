// Writing a program that divides bill among three couples with children
#include <iostream>
using namespace std;

// Main function
int main() {
    // Get the total charge
    double totalCharge;
    cout << "Enter the charged amount: ";
    cin >> totalCharge;
    // Calculate the tax and service charges
    double tax = totalCharge * 0.095;
    double service = totalCharge * 0.20;
    // Calculate the share for each family
    int numFamilies = 3;
    int numChildren = 3; // Two children in the first family, one child in each of the other families
    int numAdults = numFamilies * 2 - numChildren;
    double adultShare = (totalCharge + tax + service) / (numAdults + numChildren);
    double childShare = adultShare * 0.75;
    // Outputting the result
    cout << "Bill for the adults = " << "$" << adultShare << endl;
    cout << "Bill for the children = " << "$" << childShare << endl;
    return 0;
}