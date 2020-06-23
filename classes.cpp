#include <iostream>
#include <iomanip>

using namespace std;

class smallobj
{
private:
    int somedata;

public:
    void setdata(int d)
        {somedata = d;}
    void showdata()
        {cout << "The data is " << somedata << endl;}
};

int main ()
{
    smallobj s1, s2;
    s1.setdata(766);
    s2.setdata(100);
    s1.showdata();
    s2.showdata();
    return 0;
}