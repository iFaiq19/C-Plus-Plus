#include <iostream>
using namespace std;

void calculator(double num1, double num2, char op);

int main()
{
    char op;
    double num1, num2, total;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter one operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter 2nd number: ";
    cin >> num2;
    calculator(num1, num2, op);
}

void calculator(double num1, double num2, char op)
{
    int ans;
    ans = num1;
    if (op == '+')
    ans += num2;
    else if (op == '-')
    ans -= num2;
    else if (op == '*')
    ans *= num2;
    else if (op == '/')
    ans /= num2;
    cout << "Answer is: " << ans;
}