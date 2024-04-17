// Writing a program to create a customer bill for a company
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaring and assigning fixed values to variables
    const double TVSets = 1400.00;
    const double DVDPlayers = 220.00;
    const double remoteController = 35.20;
    // Declaring and Getting the quantity of the items from the customer
    int QtyTVSets, QtyDVDPlayers, QTYremoteController;
    cout << "How many TV sets did you purchase: ";
    cin >> QtyTVSets;
    cout << "How many DVD players did you purchase: ";
    cin >> QtyDVDPlayers;
    cout << "How many remote controllers did you purchase: ";
    cin >> QTYremoteController;
    // Calculating the total cost for each of item
    double TVSetsCost = TVSets * QtyTVSets;
    double DVDPlayersCost = DVDPlayers * QtyDVDPlayers;
    double remoteControllerCost = remoteController * QTYremoteController;
    // Calculating the subtotal of the items
    double subTotal = TVSetsCost + DVDPlayersCost + remoteControllerCost;
    // calculating the sales tax of the items
    const double tax = 0.0825;
    double salesTax = subTotal * tax;
    // Calculating the total cost after sales tax
    double totalCost = salesTax + subTotal;
    // Outputting the customer's bill
    cout << "\n\t\t\t -------------Customer's Bill---------------\n";
    cout << "\t\t Total TVSets purchase: " << "$" << TVSetsCost << endl;
    cout << "\t\t Total DVD Players purchase: " << "$" << DVDPlayersCost << endl;
    cout << "\t\t Total remote controller purchase: " << "$" << remoteControllerCost << endl;
    cout << "\t\t Tax deducted: " << tax << endl;
    cout << "Total cost of items purchased is $" << totalCost << endl;
    return 0;
}