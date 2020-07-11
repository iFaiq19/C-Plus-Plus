#include <iostream>
using namespace std;

class beta;
class alpha 
{
    private:
        double data;
    public:
        alpha():data(88.1)
        {   }
        friend int friendfunc(alpha a, beta b);
};

class beta 
{
    private:
        double data;
    public:
        beta():data(11.9)
        {   }
        friend int friendfunc(alpha a, beta b);
};

int friendfunc(alpha a, beta b)
{
    double ans = a.data + b.data;
    return ans;
}

int main()
{
    alpha aa;
    beta bb;
    cout << friendfunc(aa, bb) << endl;
    return 0;
}