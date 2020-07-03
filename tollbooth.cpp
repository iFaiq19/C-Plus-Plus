#include <iostream>
using namespace std;

class tollbooth
{
    private:
        int cars;
        double toll;
    public:
        tollbooth(): cars(0), toll(0)
        {   }
        void add_car()
        {
            cars += 1;
            toll += 0.5;
        }
        void add_car(int c)
        {
            cars += c;
            toll += c/2;
        }
        void get_total()
        {
            cout << "Total Number Of Cars: " << cars << endl
                 << "Total Toll Collected: " <<toll << endl;    
        }
};

int main()
{
    tollbooth counter;
    counter.add_car();
    counter.add_car(14);
    counter.get_total();

    return 0;
}