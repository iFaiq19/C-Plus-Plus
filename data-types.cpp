#include <iostream>
using namespace std;

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