#include <iostream>
using namespace std;

class Operator
{
    private:
        int count;
    public:
        Operator(): count(0)
        {   }
        void get_count()
        {cout << count;}

        void operator ++ (int n)  //eg c1++
        {count +=1 ;}

        void operator -- (int n)  //eg c1--
        {count -=1 ;}

        void operator += (int n)  //eg c1 += 25
        {count +=n ;}

        void operator -= (int n)  //eg c1 -= 25
        {count -= n ;}
};

int main()
{
    Operator c1;
    cout << "\nC1:\t"; c1.get_count();  // 0
    c1 ++; // 1
    c1 += 100;  // 101
    c1 -= 2;  // 99
    c1 --;  // 98
    cout << "\nC1:\t"; c1.get_count();  // 98
}
