#include <iostream>
#include <conio.h>
using namespace std;

class counter
{
    protected:
        unsigned int count;
    public:
        counter() : count(0)
        {   }

        counter(int n) : count(n)
        {   }

        unsigned int get_count() const
        {return count;}

        counter operator ++ (int n)
        {return counter(count += 1);}
                
        counter operator += (int n)
        {return counter(count += n);}
};

class countDec : public counter
{
    public:
        countDec() : counter()
        {   }

        countDec(int n) : counter(n)
        {   }

        counter operator -- (int n)
        {return counter(count -= 1);}

        counter operator -= (int n)
        {return counter(count -= n);}
};

int main()
{
    countDec number1, number2(66);
    cout << "Number 1: " << number1.get_count() << endl;
    cout << "Number 2: " << number2.get_count() << endl;

    number1++; number1++; number1+=4;
    cout << "Number 1 (after increment): " << number1.get_count() << endl;

    number1--; number1-=3;
    cout << "Number 1 (after decrement): " << number1.get_count() << endl;

    number2++;number2+=5;
    cout << "Number 2 (after increment): " << number2.get_count() << endl;

    countDec number3 = number2;
    cout << "Number 3: " << number2.get_count() << endl;

    getch();
    return 0;
}