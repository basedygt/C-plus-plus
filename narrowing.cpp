/*
You can only narrow from smaller to larger numbers
*/

#include <iostream>

using namespace std;

int main() {
    short number = 131;
    long another_number {number};
    cout << another_number << endl;
    return 0;
}