#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int square(int number) {
    return number * number;
};          //The function "square" takes an int input

double square(double number) {
    return number * number;
};          //The function "square" takes a double input

int main ()
{
    int UInt;
    double UDouble;
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an integer and a float value (give a space b/w the numbers): ";
    cin >> UInt >> UDouble;

    cout << "The squares of " << UInt << " and " << UDouble << " are:" << endl;
    cout << square(UInt) << " and " << square(UDouble) << endl;
    
    return 0;
}