#include <iostream>
using namespace std;

int main()
{
    string str = "NED University of Engineering & Technology";
    string strsub;
    cout << "Length of string: " << str.length() << endl;
    cout << "The first character of the string is: " << str[0] << endl; 
    cout << "The index value of & is: " << str.find('&') << endl;
    cout << "The first 3 characters: " << str.substr(0, 3) << endl;
    strsub = str.substr(0, 14);
    cout << strsub << endl;
    return 0;
}