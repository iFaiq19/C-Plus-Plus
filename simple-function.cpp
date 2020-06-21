#include <iostream>
using namespace std;

void starline(char ch, int n);            //function declaration (prototype)

void hello(string name);            //second function declaration

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
    hello(name);            //call to second function


    starline('-', 60);         //call to function
    cout << "Data type Range" << endl;
    starline('=', 60);         //call to function
    cout << "char;  -128 to 127" << endl
         << "short; -32,768 to 32,767" << endl
         << "int;    system dependent" << endl
         << "long;  -2,147,483,648 to 2,147,48,647" << endl;
    starline('-', 60);         //call to function
    getchar();
    return 0;
}
//---------------------------------------------------------
//function definition
void starline(char ch, int n)         //function declarator
{
    for (int j=0; j<n; j++)            //function body
        cout << ch;
    cout << endl;
}

void hello(string name)         //second function
{
    cout << "Hello, " << name << endl;
}