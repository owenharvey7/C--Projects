#include <iostream>
#include <string>
using namespace std;

int main(){
    // Declare the variables
    int num1, num2;
    num1 = 6;
    num2 = 42;

    // Calculate the values
    int sub = num2 - num1;
    int sum = num2 + num1;
    int mul = num2 * num1;
    int div = num2 / num1;

    // Output the calculations
    cout << "The difference between " << num2 << " and " << num1 << " is " << sub << endl;

    cout << "The sum of " << num2 << " and " << num1 << " is " << sum << endl;

    cout << "The product of " << num2 << " and " << num1 << " is " << mul << endl;

    cout << "The quotient of " << num2 << " divided by " << num1 << " is " << div << endl;

}