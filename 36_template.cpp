/* Template : That can work with different datatype.They can be used to create Variable Template , Class template , funciton template  and COncept template
-Parameterized Classes
Why use :
    -follows DRY principle
    -Generic programming
*/

#include<iostream>
using namespace std;

template <class T>
class Vector {
    public:
        T *arr;
        int size;
        Vector(int m){
            size=m;
            arr= new T [size];
        }
        T dot(Vector &v){
            T d=0;
            for (int i=0;i<size;i++){
                d=d+ v.arr[i]*(this->arr[i]);   
            }
            return d;
        }
    
};
int main () 
{
    Vector <int>v1(3);
    v1.arr[0]=2;
    v1.arr[1]=3;
    v1.arr[2]=4;
    Vector <int>v2(3);
    v2.arr[0]=2;
    v2.arr[1]=4;
    v2.arr[2]=2;
    int product = v1.dot(v2);
    cout<<"Dot product of v1 and v2 : "<<product<<endl;

    Vector <float>v3(3);
    v3.arr[0]=3.4;
    v3.arr[1]=2.44;
    v3.arr[2]=5.2;
    Vector <float>v4(3);
    v4.arr[0]=1.8;
    v4.arr[1]=4.1;
    v4.arr[2]=2.3;
    float fprod = v3.dot(v4);
    cout<<"Dot product of v3 and v4 : "<<fprod<<endl;
    return 0;
}

