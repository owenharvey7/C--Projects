#include <iostream>
#include <string>
using namespace std;

int main(){
    // Declare the variables
    float num1, num2;
    
    // Get our values
    cout << "Enter an integer value: ";
    cin >> num1;

    cout << "Enter another integer value: ";
    cin >> num2;

    // Check for division by zero
    if (num1 == 0) {
        cout << "Cannot divide by zero." << endl;
        return 1; // Exit with an error code
    }

    // Calculate the values
    float sub = num2 - num1;
    float sum = num2 + num1;
    float mul = num2 * num1;
    float div = num2 / num1;

    // Output the calculations
    cout << "The difference between " << num2 << " and " << num1 << " is " << sub << endl;

    cout << "The sum of " << num2 << " and " << num1 << " is " << sum << endl;

    cout << "The product of " << num2 << " and " << num1 << " is " << mul << endl;

    cout << "The quotient of " << num2 << " divided by " << num1 << " is " << div << endl;
}