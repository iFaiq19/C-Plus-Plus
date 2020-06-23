#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//-----------------Different Type Of Arguments-------------------
/***
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

***/

//---------------------Different Number of Parameters/Arguments-------------

void printchars();
void printchars(char ch);
void printchars(char ch, int n);

int main ()
{
    printchars();      //Prints the default '*' 40 times
    printchars('/');        //Prints '/' 70 times
    printchars('=', 60);        //Print '=' 60 times
    
    return 0;
}

void printchars()
{
    for (int i=0; i<40; i++)
        cout << '*';
    cout << endl;
}

void printchars(char ch)
{
    for (int i=0; i<70; i++)
        cout << ch;
    cout << endl;
}

void printchars(char ch, int n)
{
    for (int i=0; i<n; i++)
        cout << ch;
    cout << endl;
}