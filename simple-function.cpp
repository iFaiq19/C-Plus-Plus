#include <iostream>
using namespace std;

void starline(int n);            //function declaration (prototype)

int main()
{
    cout << "Enter number: ";
    int n;
    cin >> n;
    starline(n);         //call to function
    cout << "Data type Range" << endl;
    starline(n);         //call to function
    cout << "char;  -128 to 127" << endl
         << "short; -32,768 to 32,767" << endl
         << "int;    system dependent" << endl
         << "long;  -2,147,483,648 to 2,147,48,647" << endl;
    starline(n);         //call to function
    return 0;
}
//---------------------------------------------------------
//function definition
void starline(int n)         //function declarator
{
    for (int j=0; j<n; j++)            //function body
        cout << "*";
    cout << endl;
}