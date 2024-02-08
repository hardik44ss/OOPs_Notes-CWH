// basic file operations
#include <iostream>
#include <fstream>
#include<string>
using namespace std;
/*
ofstream: Stream class to write on files
 ifstream: Stream class to read from files
 fstream: Stream class to both read and write from/to files.

TO open the file 
    -Using the constructor
    -Using the member function open() of the class

*/
int main(){
    string s1="Hello bro";
    ofstream out("01.1sample.txt");//Used for write operation
    out<<s1;
    string st2;

    // // Opening files using constructor and reading it
    ifstream in;
    in.open("01.1sample.txt"); // Read operation
    // in>>st2; --> it doesnt output the space and new line character
    getline(in, st2); 
    getline(in, st2); 
    cout<<st2;

    return 0;
}
