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

        Operator(int c): count(c)
        {   }

        Operator operator ++ (int n)  //eg c1++
        {count +=1 ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        Operator operator -- (int n)  //eg c1--
        {count -=1 ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        Operator operator += (int n)  //eg c1 += 25
        {count +=n ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        Operator operator -= (int n)  //eg c1 -= 25
        {count -= n ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        Operator operator + (int n)  //eg c1 - 25
        {count += n ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        Operator operator - (int n)  //eg c1 - 25
        {count -= n ;
        // Operator temp;
        // temp.count = count;
        // return temp;
        return Operator(count);
        }

        // for saving the count in ordinary varible, we will use this fucntion

        int returnValue(){
            return count;
        }
};

int main()
{
    Operator c1, c2;
    cout << "\nC1:\t"; c1.get_count();  // 0
    cout << "\nC2:\t"; c2.get_count();  // 0
    c1 ++; // 1
    c1 += 100;  // 101
    c1 -= 2;  // 99
    c1 --;  // 98
    c2 = c1 + 300;  // 398
    cout << "\nC1:\t"; c1.get_count();  // 98
    cout << "\nC2:\t"; c2.get_count();  // 398

    // creating a ordinary variable and returning the value of count to save in it;
    int ordinaryVariable = c1.returnValue();
    cout << "The Value of Count is: " << ordinaryVariable << endl;

}
