#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float side, area;

    cout << "Enter the side length of the equilateral triangle: ";
    cin >> side;

    area = (sqrt(3) / 4) * (side * side);

    cout << fixed << setprecision(2);
    cout << "The area of your equilateral triangle is " << area << "." << endl;
}