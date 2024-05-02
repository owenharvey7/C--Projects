#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float side1, area, perimeter;

    cout << "Enter the the length of one side of the square: ";
    cin >> side1;

    area = side1 * side1;
    perimeter = (side1 * 4);

    cout << fixed << setprecision(1);
    cout << "The perimeter of the rectangle is " << perimeter << endl;
    cout << "The area of the rectangle is " << area << endl;

}