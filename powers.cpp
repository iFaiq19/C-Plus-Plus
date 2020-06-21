#include <iostream>
#include <cmath>

using namespace std;

void powers(int num);

int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    powers(num);
    return 0;
}

//-----------------------------------

void powers(int num)
{
    int sq, cube, fourth;
    sq = pow(num, 2);
    cube = pow(num, 3);
    fourth = pow(num, 4);

    cout << "The square of your number is: " << sq << endl
         << "The cube of your number is: " << cube << endl
         << "The fourth power of your number is: " << fourth << endl;
}