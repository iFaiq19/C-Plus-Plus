#include <iostream>
using namespace std;

class Complex{
    public:
    int x;
    int y;

    Complex(){
        x = 0; y = 0;
    }

    Complex(int x, int y){
        this->x = x;
        this->y = y;
    }

    friend istream& operator>>(istream &din, Complex&); // overloading insertion operator
    friend ostream& operator<<(istream &dout, Complex); // overloading extraction operator

    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex, Complex);

};

istream& operator>>(istream &din, Complex &C){
    cout << "Enter Value of x: ";
    cin >> C.x;
    cout << "Enter value of y: ";
    cin >> C.y;
    return din;
}

ostream& operator<<(ostream& dout, Complex C){
    cout << C.x << "+" << C.y << "i" << endl;
    return dout;
}

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.x = c1.x + c2.x;
    temp.y = c1.y + c2.y;

    return temp;
}

Complex operator-(Complex c1, Complex c2){
    Complex temp;
    temp.x = c1.x - c2.x;
    temp.y = c1.y - c2.y;

    return temp;
}

int main(){
    Complex c1(2, 5);
    cout << c1;

    Complex c2, c3, c4;
    cin >> c2;
    cout << c2;

    c3 = c1 + c2;
    cout << c3;

    c4 = c1 - c2;
    cout << c4;
}