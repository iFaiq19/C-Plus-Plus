#include <iostream>
using namespace std;

class oop
{
    protected:
        string std_name;
        char std_id[10];
        const string course = "Object Oriented Programming";
    public:
        void get_data()
        {
            cout << "Enter Name: ";
            cin >> std_name;
            cout << "Enter Roll Number/ID: ";
            cin >> std_id;
        }

        void show()
        {
            cout << "Course: " << course << "\n\n"
                 << "Name: " << std_name << endl
                 << "Roll Number: " << std_id << endl;
        }
};

class backlog: public oop
{
    private:
        string department, year;
    public:
        void get_data()
        {
            oop::get_data();
            cout << "Enter Department: ";
            cin >> department;
            cout << "Enter Year: ";
            cin >> year;
        }

        void show()
        {
            oop::show();
            cout << "Department: " << department << endl
                 << "Year: " << year << endl;
        }

};

int main()
{
    oop std1;
    backlog std2;
    std1.get_data();
    std2.get_data();
    std1.show();
    std2.show();
}