#include <iostream>
#include <cmath>

using namespace std;

void powers()
{
    for (int i=1; i <6; i++)
    {
        cout << "The square of " << i << " is " << pow(i, 2) << endl
             << "The cube of " << i << " is " << pow(i, 3) << endl
             << "The fourth power of " << i << " is " << pow(i, 4) << endl
             << "\n\n";
    };
}

int main()
{
    powers();
    return 0;
}