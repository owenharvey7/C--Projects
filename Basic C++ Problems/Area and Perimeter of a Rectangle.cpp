#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float side1, side2, area, perimeter;

    cout << "Enter the the length of one side of the rectangle: ";
    cin >> side1;

    cout << "Enter the the length of the other side of the rectangle: ";
    cin >> side2;

    area = side1 * side2;
    perimeter = (side1 * 2) + (side2 * 2);

    cout << fixed << setprecision(1);
    cout << "The perimeter of the rectangle is " << perimeter << endl;
    cout << "The area of the rectangle is " << area << endl;

}