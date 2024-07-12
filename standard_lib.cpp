#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Enter Radius of the circle: ";
    double radius;
    cin >> radius;
    double area = M_PI * pow(radius, 2.0); // area of circle = πr^2
    cout << "Resulting area is " << area << endl;
    return 0;
}
