// Writing a program that extract and prints the second digit of input data type int
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variable
    int digit, secondDigit;
    // Prompt and Output
    cout << "Enter at least three digit: ";
    cin >> digit;
    // Processing.......
    secondDigit = (digit / 10) % 10;
    // Outputting the result
    cout << "Given digit: " << digit << endl;
    cout << "The second digit in the number above is " << secondDigit << endl;
    return 0;
}