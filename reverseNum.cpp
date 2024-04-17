// Writing a program that reverse numbers from input
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int firstNum, secondNum, thirdNum;
    // Prompt and output
    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter the second number: ";
    cin >> secondNum;
    cout << "Enter the third number: ";
    cin >> thirdNum;
    // Outputting the result
    cout << "Numbers Entered are " << firstNum << secondNum << thirdNum << endl;
    cout << "Therefore, the reverse of " << firstNum << secondNum << thirdNum << " is " << thirdNum << secondNum << firstNum << endl;
    
    return 0;
}