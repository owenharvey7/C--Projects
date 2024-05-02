#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float height, base, area;

    cout << "Enter the height of the right triangle: ";
    cin >> height;

    cout << "Enter the base of the right triangle: ";
    cin >> base;

    area = (height * base) / 2;

    cout << fixed << setprecision(2);
    cout << "The area of your right triangle is " << area << endl;
}