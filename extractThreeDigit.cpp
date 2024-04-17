// Writing a program that individually extracts the rightmost three digit of an input data of int type
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int digits, firstDigit, secondDigit, thirdDigit;
    // Prompt and output
    cout << "Finding the right most three digit of numbers" << endl;
    cout << "Enter any digits greater than 3: ";
    cin >> digits;
    // Processing............
    firstDigit = digits % 10;
    secondDigit = (digits / 10) % 10;
    thirdDigit = (digits / 100) % 10;
    // Outputting the result
    cout << "Given digit: " << digits << endl;
    cout << "The first digit is " << firstDigit << endl;
    cout << "The second digit is " << secondDigit << endl;
    cout << "The third digit is " << thirdDigit << endl;
    cout << "Therefore, the rightmost three digit of the numbers above is " << thirdDigit << secondDigit << firstDigit << endl;
    return 0;
}