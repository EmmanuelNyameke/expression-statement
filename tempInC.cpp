// Writing a program that prints temperature in centigrade
#include <iostream>
using namespace std;

// Main Function
int main() {
    // Get temperature in fahrenheit from user
    double temperature;
    // Prompt and output
    cout << "Enter the temperature: ";
    cin >> temperature;
    // Calculating the temperature from fahrenheit to centigrade
    double centigrade = (temperature - 32) * 5/9;
    // Outputting the result
    cout << "Temperature in centigrade: " << centigrade << endl;
    return 0;
}