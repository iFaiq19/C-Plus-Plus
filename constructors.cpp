#include <iostream>
using namespace std;

class counter
{
    private:
        unsigned int count;
        int count1,count2;
    public:
        //Default constructor
        counter()
        {
            count = 0;
            cout << "This is the default constructor in which count is initialized to 0" << endl;
        }

        //Argument/Multi argument
        counter(int n)
        {
            count = n;
            cout << "In this constructor the value of count will be set to any given number, in this case count=" << count << endl;
        }

        counter(int a, int b)
        {
            count1=a;
            count2=b;
            cout << "This multivariable constructor displays the value of two counts." << endl
                 <<"Count 1: " << count1 << endl
                 <<"Count 2: " << count2 << endl;
        }

        void show_count() {
            cout << count1 << "     This is count1" << endl
                 << count2 << "     This is count2" << endl;
        }
};

int main()
{
    counter c1;
    counter c2(4);
    counter c3(100,800);
    counter c4=c3; //copy constructor 1st way
    counter c5(c3); //copy constructor 2nd way
    c4.show_count();
    c5.show_count();
    return 0;
}