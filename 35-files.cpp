#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () 
{
    string st;
    ofstream out; //using constructor
    out.open("sample.txt");
    out<<"Hello , this is hardik\n";
    out<<"Hello , this is the hardik\n";
    out<<"Hello , this is also hardik\n";
    out<<"Hello ,It is what it is.";
    out.close();

    ifstream in;
    string st2;
    in.open("sample.txt");
    // in>>st;
    while(in.eof()==0){
        getline(in,st2);
        cout<<st2<<endl;
    }
    in.close();



    return 0;
}
