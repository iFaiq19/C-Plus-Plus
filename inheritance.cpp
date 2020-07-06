#include <iostream>
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
        Count operator -- (int n)
        {return Count(count -= 1);}

        Count operator -= (int n)
        {return Count(count -= n);}
};

int main()
{
    CountDec number;
    cout << "Count: " << number.get_count();

    number++; number++; number+=4;
    cout << "\nCount: " << number.get_count();

    number--; number-=3;
    cout << "\nCount: " << number.get_count();
}