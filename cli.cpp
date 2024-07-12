#include <iostream>

using namespace std;

int main() {
    cout << "Enter temperature in fahrenheit: ";
    double fahrenheit_temp;
    cin >> fahrenheit_temp;

    double celsius_temp = (fahrenheit_temp - 32) * (5.0/9.0);
    cout << celsius_temp << "C" << endl;
}