#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numA,numB, numG;
    cout << "Enter 1st number: ";
    cin >> numA;
    cout << "Enter 2nd number: ";
    cin >> numB;
    
    if (numA>numB)
        numG = numA;
    else
        numG = numB;
    
    do 
        {
            if (numG % numA == 0 && numG % numB == 0)
                {   
                    cout << "Answer: " << numG;
                    break;
                }
            else
                numG ++;

        }
    while (1);
    return 0;
}