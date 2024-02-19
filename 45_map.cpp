#include<iostream>
#include<map>
#include<string>
using namespace std;


int main () 
{
    map<string,int> student;
    student[ "JohnSena" ] =167 ;
    student[ "Hardik" ] =498 ;
    student[ "Chanchal"] =499;
    student.insert({{"Bablu",431},{"Dablu",456}});

    map<string,int> :: iterator itr;
    for(itr = student.begin() ; itr!=student.end() ; itr++){
        cout<<"Name : "<<(*itr).first << " : "<<(*itr).second << endl;
    }
    // cout<<"Hardik marks : "<<student.find("Hardik");
    if(student.find("Hardik") != student.end()){
        cout<<"Hardik is present in exam"<<endl;
    }else{
        cout<<"Hardik is not present in exam"<<endl;
    }
    
    cout << "Size of the Map : "<<student.size()<<endl;
    cout << "Max size possible : "<<student.max_size()<<endl;
    cout << "Value of empty's return : "<<student.empty()<<endl;
    //O= mean not empty , 1 = empty


    return 0;
}
