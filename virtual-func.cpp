#include <iostream>
using namespace std;

class father
{
    protected:
        int age;
    public:
        father(int n) : age(n)
        {   }
        virtual void show()
        {cout << "I am Father and my age is..."<< age << endl;}
};

class son : public father
{
    public:
        son(int n) : father(n)
        {   }
        void show()
        {cout << "I am Son and my age is..."<< age << endl;}
};

class daughter : public father
{
    public:
        daughter(int n) : father(n)
        {   }
        void show()
        {cout << "I am Daughter and my age is..."<< age << endl;}
};

int main()
{
    son s1(10);
    daughter d1(8);
    father f1(35);

    father* ptr[3];
    ptr[0]=&f1;
    ptr[1]=&s1;
    ptr[2]=&d1;

    ptr[0]->show();
    ptr[1]->show();
    ptr[2]->show();

    return 0;
}