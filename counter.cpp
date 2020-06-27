//=============constructor example===========

#include <iostream>
using namespace std;

class counter
{
    private:
        unsigned int count;
    
    public:
        counter() : count(0)  //constructor
        {cout << "Calling constructor\nI'm the constructor\n";}
        void inc_count()
        {count++;}
        void inc_count(int n)
        {count+=n;}
        int ret_count()
        {return count;}        
};
int main()
{
    counter c1, c2; //initialize, "calling constructor..." will be displayed after this initialization too
    cout << "C1: " << c1.ret_count() << endl;  //display the value of count
    cout << "C2: " << c2.ret_count() << endl;  //display the value of count

    c1.inc_count();  //increment in count
    c2.inc_count(2);  //increment in count using the overloaded function

    cout << "C1: " << c1.ret_count() << endl;  //display after increment
    cout << "C2: " << c2.ret_count() << endl;  //display after increment

    return 0;
}