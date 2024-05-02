#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float radius, area, circumfrence;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = M_PI * pow(radius, 2);
    circumfrence = 2 * M_PI * radius;

    cout << fixed << setprecision(2);
    cout << "Area of the circle = " << area << endl;
    cout << "Circumfrence of the circle = " << circumfrence << endl;

    return 0;
}