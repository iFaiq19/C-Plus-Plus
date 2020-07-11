#include <iostream>
using namespace std;

class persons
{
    protected:
    string name;
    public:
    void getname()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
    virtual void displayname()
    {cout << "Name: " << name << endl;}

    virtual void getdata() = 0;
    virtual bool isoutstanding() = 0;
};

class student : public persons
{
    private:
    float gpa;
    public:
    void getdata()
    {
        persons::getname();
        cout << "Enter GPA: ";
        cin >> gpa;
    }
    void displayname()
    {
        persons::displayname();
        cout << "GPA: " << gpa << endl;
    }
    bool isoutstanding()
    {return (gpa>=3.5) ? true:false;}
};

class professor : public persons
{
    private:
    int publications;
    public:
    void getdata()
    {
        persons::getname();
        cout << "Enter number of publications: ";
        cin >> publications;
    }
    void displayname()
    {
        persons::displayname();
        cout << "Number of publications: " << publications << endl;
    }
    bool isoutstanding()
    {return (publications>=100) ? true:false;}
};

int main()
{
    persons* perarr[100];
    int n=0;
    char choice;
    do {
        cout << "Enter student or professor(s/p): ";
        cin >> choice;

        if (choice=='s')
            perarr[n] = new student;
        else
            perarr[n] = new professor;

        perarr[n++]->getdata();

        cout << "Do you want to enter another?(y/n) ";
        cin >> choice;
    }while (choice=='y');

    for (int j=0; j<n; j++)
    {
        perarr[j]->displayname();
        if (perarr[j]->isoutstanding())
            cout << "This person is outstanding" << endl;
    };

    return 0;
}