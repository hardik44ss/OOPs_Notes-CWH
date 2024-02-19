#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr;

    cout << "List : ";
    for (itr = lst.begin(); itr !=lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout<<endl;
}
int main () 
{
    list<int> list1; // List of size 0
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(2);
    cout<<"First ";
    display(list1); 

    list1.reverse();
    cout<<"Reverse ";
    display(list1);
    cout<<"After sorting ";
    list1.sort();
    display(list1);
    // list1.unique(); : Remove duplicates

    list<int> list2(5); // Empty list of size 5
    list<int> :: iterator itr=list2.begin();
    *itr++=4; 
    *itr++=8; 
    *itr++=4; 
    *itr++=8; 
    *itr=4; 
    cout<<"Second ";
    display(list2);
    list2.sort();
    display(list2);
    cout<<"After merge ";
    list1.merge(list2);
    display(list1);
   
    return 0;
}
