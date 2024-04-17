// Writing a program that inputs four scores, finds and prints the average of the scores
#include <iostream>
using namespace std;

// Main Function
int main () {
    // Declaration of variables
    int scores;
    double average;
    // Prompt and output
    cout << "Enter the first scores: ";
    cin >> scores;
    cout << "Enter the second scores: ";
    cin >> scores;
    cout << "Enter the third scores: ";
    cin >> scores;
    cout << "Enter the fourth scores: ";
    cin >> scores;
    // finding the average of the scores
    average = scores / 4;
    // Outputting the result
    cout << "The average of the four scores is " << average << endl;
    return 0;
}