#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float side1, side2, side3, semiPerimeter, area;

    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout <<"Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    semiPerimeter = .5 * (side1 + side2 + side3);

    area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    cout << fixed << setprecision(2);
    cout << "Area of the scalene triangle = " << area << endl;

    return 0;
}