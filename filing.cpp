////////////////////////REVIEW QUESTION///////////////////////////////

#include <fstream>

#include <string>

#include <iostream>

using namespace std;

int main ()
{
    //Writing data in MyData.txt file.
    
    ofstream ofile;
    
    ofile.open("MyData.txt");
    
    ofile <<"I fear thee, ancient Mariner!\n";
    
    ofile <<"I fear thy skinny hand\n";
    
    ofile <<"And thou art long, and lank, and brown,\n";
    
    ofile <<"As is the ribbed sea sand.\n";
    
    ofile.close();
    
    
    //Reading data from MyData.txt file.
    
    
    const int length=80;
    
    char text[length];
    
    ifstream ifile;
    
    ifile.open("MyData.txt");
    
    while( !ifile.eof() )
    
    {
        ifile.getline(text,length);
        
        cout<<text<<endl;
    }
    
    ifile.close();
    
    return 0;
    
}
