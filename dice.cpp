#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));
    int rand_num = rand();
    short rand_dice_num = (rand_num % (maxValue - minValue + 1)) + 1;
    cout << "Dice number: " << rand_dice_num << endl;
}