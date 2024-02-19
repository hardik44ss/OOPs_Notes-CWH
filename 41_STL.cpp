/* STL : Standard Template Library
It is used because its a good idea not to reinvent the wheel
-In C++, the STL Standard Template Library has many algorithms for some
 operations like searching, counting, and manipulation of ranges and their
 elements.

Component : -Container
                -Use Template classes
                -Stores data
            -Algorithm (Procedure to process data)
                -sorting
                -Searching
                -Use template functions
            -Iterator
                -Objects points to an element in the container
                -Handled just like pointer
                -Connects ALgo. with Container
    STL : Container + Algo. + Interator

   RA = Roughness Average
-Container:
    -Sequence : Linear fashion
                    -Vector = -RA fast
                              -Insertion/Del Middle = slow
                              -Insertion/Del in end = fast
                    -list = -RA slow
                            -Insertion/Del in middle = fast
                            -Insertion/Del in end = slow
                     , Diqueue
    -Associative : Direct access(Tree)
        =All operation fast
         except RA ( Roughness average )
                    -Set/multiset
                    -Map/Mutlimap
    -Derived : Real world modeling
        = Depend on data structure used
                    -Stack
                    -Queue
                    -Priority - Queue
*/
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    // for(int i=0; i< v.size() = we can also use this
    cout << "  -  ";
    // int i=0;
    for (int n : v)
    {
        cout << n << " ";
        // cout<<v.at(i)<<" "; 
        // i++;
    }
   
    cout << endl;
}

int main()
{
    vector<int> vec1;  // Zero length vector declared
    // It manages its size by own
    int element;
    int size;
    cout << "Enter size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> element;
        vec1.push_back(element); // Length is increased  , element added in the end
    }
    cout << "Given vector is : " << endl;
    display(vec1);

    vec1.pop_back();
    cout << "After pop back : " << endl;
    display(vec1);

    // We can also overwrite any element
    vec1[1] = 44;
    cout << "AFter overwriting 2nd element : " << endl;
    display(vec1);

    vector<int>::iterator itr = vec1.begin();
    vec1.insert(itr, 88); // Inserting at first position
    cout << "AFter insertion 1st element : " << endl;
    display(vec1);

    cout << "Inserting copies from 3rd element in vector : " << endl;
    vec1.insert(itr + 2, 10, 69);
    display(vec1);

    return 0;
}
