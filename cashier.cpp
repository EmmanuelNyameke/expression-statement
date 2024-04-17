// Writing a program that will help a cashier at a store
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Get Purchase amount and amount given
    double purchaseAmount, amountGiven;
    // Prompt and output
    cout << "Enter the purchase amount: $";
    cin >> purchaseAmount;
    cout << "Enter the amount given by the customer: $";
    cin >> amountGiven;
    // Calculate the total change 
    double totalChange = amountGiven - purchaseAmount;
    // Breaking down change into dollars, quarters, dimes, nickels, and pennies
    int dollars = static_cast <int> (totalChange);
    int cents = static_cast <int> (totalChange - dollars) * 100;
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    cents %= 5;
    int pennies = cents;
    // Outputting the breakdown of change
    cout << "The change given to the customer is " << dollars << " dollar(s), " << cents << " cents, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies." << endl;
    return 0;
}