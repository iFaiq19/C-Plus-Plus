#include <iostream>
using namespace std;

class shape
{
    protected:
        double length, width;
    public:
        virtual void get_data()
        {
            cout << "Enter length/base: "; cin >> length;
            cout << "Enter height/width: "; cin >> width;
        }

        virtual void display_area() = 0;
};

class triangle : public shape
{
    public: 
        void get_data()
        {
            cout << "-----For Triangle-----" << endl;
            shape::get_data();
        }

        void display_area()
        {
            cout << "The area of triangle with height= " << width << " and base= " << length << " is= "
                 << (length*width)/2 << endl;
        }
};

class rectangle : public shape
{
    public: 
        void get_data()
        {
            cout << "-----For Rectangle-----" << endl;
            shape::get_data();
        }
        void display_area()
        {
            cout << "The area of rectangle with width= " << width << " and length= " << length << " is= "
                 << length*width << endl;
        }
};

int main()
{
    triangle t1;
    rectangle r1;
    shape* arr[2];
    arr[0] = &t1;
    arr[1] = &r1;

    arr[0]->get_data();
    arr[0]->display_area();

    arr[1]->get_data();
    arr[1]->display_area();

    return 0;
}