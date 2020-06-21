#include <iostream>
#include <cmath>
using namespace std;


// Hello World
/***
int main()
{
    cout<<"Hello World"<<endl;
    return 0;
}
***/

//Variables
/***
int main()
{
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
    return 0;
}
***/

//Data Types
/***
int main()
{
    char grade = 'A';
    string name = "Faiq";
    int per_round = 79;
    float marks = 175.25;
    double nothing = 56.6666;
    bool cleared = true;
    cout << "Student: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Percentage: " << per_round << endl;
    cout << "Marks: " << marks << endl;  
    cout << "Double can store more decimal points than float " << nothing << endl;
    cout << "Passed the exam? (1 for yes, 0 for no): " << cleared;
    return 0;
}
*///

//Working with strings 
/***
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
***/

//Working with numbers
/***
int main()
{
    int number;
    double num1, num2;
    number = 10;
    cout << number << endl;
    number++;
    cout << number << endl;
    number--;
    cout << number << endl;
    number+=100;
    cout << number << endl;
    number-=140;
    cout << number << endl;
    num1=10;
    num2=5.5;
    cout << num1/num2 << endl;
    cout << pow(10, 2) << endl;
    cout << sqrt(25) << endl;
    cout << round(88.6) << endl;
    cout << ceil(55.1) << endl;
    cout << floor(99.9) << endl;
    cout << fmax(10,11) << endl;
    cout << fmin(4,110) << endl;
    return 0;
}
***/

