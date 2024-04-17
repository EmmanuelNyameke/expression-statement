// Writing a program that print temperature in fahrenheit
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Get temperature
    double temperature;
    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;
    // Calculating the temperature from celsius to fahrenheit
    double fahrenheit = (9/5) + 32;
    // Outputting the result
    cout << "Temperature given: " << temperature << "C" << endl; 
    cout << "The temperature in celsius is " << fahrenheit << " F" << endl;
    return 0;
}