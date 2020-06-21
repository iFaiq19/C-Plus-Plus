#include <iostream>
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
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
    return 0;
}
*///

//Data Types

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
    return 0
}