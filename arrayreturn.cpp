#include <iostream>
using namespace std;

int main()
{
    cout << "Choose your disease" << endl;
    string x[5][3] = { {"1.corona","40","1000"},{"2.fever","2","500"},{"3.emergency ward","3","2000"},{"4.heart disease","7","3000"} ,{"5.eye checkup","1","5000"} };
    for (int i = 0; i < 5; i++)
        cout << x[i][0] << endl;
    return 0;
}