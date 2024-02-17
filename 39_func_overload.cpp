//Member function tmeplate and template function overloading
#include<iostream>
using namespace std;

template <class T>
class print{
    public:
        T data;
        print(T a){
            data=a;
        }
        void display(){
            cout<<"\nValue of a is : "<<data<<endl;
        }
};

void samefn(int a){
    cout<<"Normal funtion - value of a : "<<a<<endl<<endl;
}
template<class T>

void samefn(T b){
    cout<<"Templatised funtion - value of a : "<<b<<endl<<endl;
}

int main () 
{
    print <int>p(4);
    p.display();

    samefn('H');
    samefn(44);
    return 0;
}
