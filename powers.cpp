#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//------------------------------------------------------------------------
/***
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
***/


//-----------------------------------------------------------------------
double powers(double n, int p)
{
    double answer;
    answer = 1;
    for (int i=0; i<p; i++)
        answer *= n;
    return answer;
};

double powers(double n)
{
    double answer;
    answer = 1.00;
    for (int i=0; i<2; i++)
        answer *= n;
    return answer;
};


int main()
{
    double num, num2;
    int pnum;
    cout << "Enter a floating-point number: ";
    cin >> num;
    cout << "Enter a power: ";
    cin >> pnum;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Answer when both, double and int are taken as input: " << powers(num, pnum) << endl;
    
    cout << "Enter second floating-point number: ";
    cin >> num2;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Answer on default power (i.e 2): " << powers(num2);
    return 0;
}