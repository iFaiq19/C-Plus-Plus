// formato.cpp
// writes formatted output to a file, using <<
#include <fstream> //for file I/O
#include <iostream>
#include <string>
using namespace std;
int main()
{
char ch = 'x';
int j = 77;
double d = 6.02;
string str1 = "Kafka"; //strings without
string str2 = "Proust"; // embedded spaces
ofstream outfile("fdata.txt"); //create ofstream object
outfile << ch //insert (write) data
<< j
<< ' ' //needs space between numbers
<< d
<< ' '
<< str1
<< ' ' //needs spaces between strings
<< str2;
cout << "File written\n";
outfile.close();


char ch1;
int j1;
double d1;
string str11;
string str21;
ifstream infile("fdata.txt"); //create ifstream object
                                       //extract (read) data from it
infile >> ch1 >> j1 >> d1 >> str11 >> str21;
cout << ch1 << endl //display the data
<< j1 << endl
<< d1 << endl
<< str11 << endl
<< str21 << endl;
infile.close();
return 0;
}