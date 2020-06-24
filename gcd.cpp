//---------------Finding Greatest Common Divisor--------------
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a != 0)
        return gcd(b % a, a);
    else
        return b;
};

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "The GCD of " << a << " and " << b << " is: " << gcd(a, b);
    return 0;
}