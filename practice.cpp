//---------------function declaration inside a class----------

#include <iostream>
using namespace std;

//-------------------------------------------------------------
class Distance
{
    private:
        int feets;
        float inches;
    public:
        Distance() : feets(0), inches(0.0) //constructor no args
            {   }
        Distance(int a, float b) : feets(a), inches(b)  //constructor 2 args
            {   }
        void get_dist()  //to get input from user
            {
                cout << "Enter feets: "; cin >> feets;
                cout << "Enter inches: "; cin >> inches;
            }
        void display()  //to show output
            {
                cout << feets << "\' " << inches << "\"";
            }
        void add_dist(Distance, Distance);  //declaration
};

//---------------------------------------------------------------
void Distance::add_dist(Distance d1, Distance d2)  //to add d1 and d2
{
    inches = d1.inches + d2.inches;  //add inches
    feets = 0;  //initialize
    if (inches >= 12.0)  //if total exceeds by 12.0,
        {
            inches -= 12.0;  //subtract 12.0 from inches and
            feets ++;  //increase 1 feet
        }
    feets += d1.feets + d2.feets;  //add feets
};

//---------------------------------------------------------------
int main()
{
    Distance dist2, dist3;  //define two lengths
    Distance dist1(16, 11.25);  //define and initialize dist2

    dist2.get_dist();  //take input for dist1
    dist3.add_dist(dist1,dist2);  //give value to dist3 by add dist1(input) and dist2(constructor values)
 
    cout << "\ndist1: "; dist1.display();  //display distances
    cout << "\ndist2: "; dist2.display();  //display distances
    cout << "\ndist3: "; dist3.display();  //display distances

    return 0;
}