#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    double num1, num2;
    number = 10;
    cout << number << endl;
    number++;
    cout << number << endl;
    number--;
    cout << number << endl;
    number+=100;
    cout << number << endl;
    number-=140;
    cout << number << endl;
    num1=10;
    num2=5.5;
    cout << num1/num2 << endl;
    cout << pow(10, 2) << endl;
    cout << sqrt(25) << endl;
    cout << round(88.6) << endl;
    cout << ceil(55.1) << endl;
    cout << floor(99.9) << endl;
    cout << fmax(10,11) << endl;
    cout << fmin(4,110) << endl;
    return 0;
}