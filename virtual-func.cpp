#include <iostream>
using namespace std;

class family
{
    protected:
        int age;
    public:
        family(int n) : age(n)
        {   }
        virtual void show() = 0;
};

class father : public family
{
    public:
        father(int n) : family(n)
        {   }
        void show()
        {cout << "I am Father and my age is: "<< age << endl;}
};

class mother : public family
{
    public:
        mother(int n) : family(n)
        {   }
        void show()
        {cout << "I am Mother and my age is: "<< age << endl;}
};


class son : public family
{
    public:
        son(int n) : family(n)
        {   }
        void show()
        {cout << "I am Son and my age is: "<< age << endl;}
};

class daughter : public family
{
    public:
        daughter(int n) : family(n)
        {   }
        void show()
        {cout << "I am Daughter and my age is: "<< age << endl;}
};

int main()
{
    father ft(35);
    mother mt(33);
    son s1(10);
    daughter d1(8);
    son s2(5);

    family* ptr[5];
    ptr[0]=&ft;
    ptr[1]=&mt;
    ptr[2]=&s1;
    ptr[3]=&d1;
    ptr[4]=&s2;

    ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();
    ptr[3]->show();
    ptr[4]->show();

    return 0;
}