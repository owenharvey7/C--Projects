//Celsius and Fahrenheit temperatures based on user input. You can also add conversions for Kelvin.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    float temp, Fahrenheit, Celsius, Kelvin;
    int choice;

    cout << "What is your tempature currently in? " << endl;
    cout << "   1.) Fahrenheit" << endl;
    cout << "   2.) Celsius" << endl;
    cout << "   3.) Kelvin" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << fixed << setprecision(2);
    switch(choice){
        case 1:
            cout << "Enter your tempature in Fahrenheit: ";
            cin >> Fahrenheit;
            Celsius = (Fahrenheit - 32) * 5/9;
            Kelvin = (Fahrenheit - 32) * 5/9 + 273.15;
            cout << "Your temp from Fahrenheit to Celsius is: " << Celsius << endl;
            cout << "Your temp from Fahrenheit to Kelvin is: " << Kelvin << endl;
            break;
        case 2:
            cout << "Enter your tempature in Celsius: ";
            cin >> Celsius;
            Fahrenheit = (Celsius * 9/5) + 32;
            Kelvin = Celsius +  273.15;
            cout << "Your temp from Celsius to Fahrenheit is: "<< Fahrenheit << endl;
            cout << "Your temp from Celsius to Kelvin is: "<< Kelvin << endl;
            break;
        case 3:
            cout << "Enter your tempature in Kelvin: ";
            cin >> Kelvin;
            Celsius = Kelvin - 273.15;
            Fahrenheit = (Kelvin - 273.15)* 9/5 + 32;
            cout << "Your temp from Kelvin to Fahrenheit is: "<< Celsius << endl;
            cout << "Your temp from Kelvin to Celsius is: "<< Fahrenheit << endl;
            break;
        default:
            cout << "The value you entred was not a valid option.";
    }

    return 0;

}