#include <iostream>
#include <conio.h>
using namespace std;

class Count
{
    protected:
        unsigned int count;
    public:
        Count() : count(0)
        {   }

        Count(int n) : count(n)
        {   }

        unsigned int get_count() const
        {return count;}

        Count operator ++ (int n)
        {return Count(count += 1);}
                
        Count operator += (int n)
        {return Count(count += n);}
};

class CountDec : public Count
{
    public:
        CountDec() : Count()
        {   }

        CountDec(int n) : Count(n)
        {   }

        Count operator -- (int n)
        {return Count(count -= 1);}

        Count operator -= (int n)
        {return Count(count -= n);}
};

int main()
{
    CountDec number1, number2(66);
    cout << "Number 1: " << number1.get_count() << endl;
    cout << "Number 2: " << number2.get_count() << endl;

    number1++; number1++; number1+=4;
    cout << "Number 1 (after increment): " << number1.get_count() << endl;

    number1--; number1-=3;
    cout << "Number 1 (after decrement): " << number1.get_count() << endl;

    number2++;number2+=5;
    cout << "Number 2 (after increment): " << number2.get_count() << endl;

    CountDec number3 = number2;
    cout << "Number 3: " << number2.get_count() << endl;

    getch();
    return 0;
}