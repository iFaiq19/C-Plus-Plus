#include <iostream>
using namespace std;

class conc
{
    private:
        string str;
    public:
        conc() : str("")
        {   }
        conc(string x) : str(x)
        {   }
        conc operator + (conc y)
        {
            string ans = str + " " + y.str;
            return conc(ans);
        }
        string get_ans()
        {return str;}


};

int main()
{
    string ordinary;
    conc s1("Faiq"), s2("Mahmood");
    conc s3 = s1 + s2;
    cout << s3.get_ans() << endl;
    conc s4 = s1+s2+s3;
    cout << s4.get_ans() << endl;
    ordinary = s4.get_ans();
    cout << ordinary << endl;
    return 0;
}