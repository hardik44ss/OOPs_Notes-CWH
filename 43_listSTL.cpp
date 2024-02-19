// Array : used when acces needs faster
// LInked list : used when insertion/deletion is faster ( unidirectional)
// LIst : It is bi-directional
#include <iostream>
#include <list>
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
int main()
{
    list<int> list1; // List of size 0
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(9);
    display(list1);

    list1.pop_back();
    list1.pop_front();
    display(list1);

    list1.remove(5); // It remove a specified element
    display(list1);


    list<int> list2(5); // Empty list of size 5
    list<int> :: iterator itr=list2.begin();
    *itr++=4; 
    *itr++=8; 
    *itr++=4; 
    *itr++=8; 
    *itr=4; 
    display(list2);
    return 0;
}
