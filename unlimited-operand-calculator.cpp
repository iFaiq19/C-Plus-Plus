#include<iostream>
using namespace std;

int add(int, int);
int subtract(int, int);
int divide(int, int);
int multiply(int, int);

int main() {
    int operands;
    cout << "Enter number of operands: ";
    cin >> operands;

    char operate = 'N';
    int result;

    for (int j=1; j<=operands ; j++) {
        
        int operand;
        cout << "Enter Operand: ";
        cin >> operand;

        if (j == 1) {
            result = operand;
        }

        if (operate != 'N') {
            if (operate == '+') {
                result = add(result, operand);
            }
            else if (operate == '-') {
                result = subtract(result, operand);
            }
            else if (operate == '/') {
                result = divide(result, operand);
            }
            else {
                result = multiply(result, operand);
            }
        }
        
        if (j != operands) {
            cout << "Enter Operator: ";
            cin >> operate;
        }
    }
    cout << "Your Result Is: " << result << endl;
    return 0;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int divide(int num1, int num2) {
    return num1 / num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}