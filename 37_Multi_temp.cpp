#include<iostream>
using namespace std;

template <class T1=int , class T2=float , class T3=char >
//Arguments can be changed
class hclass {
    public:
        T1 a;
        T2 b;
        T3 c;
        hclass(T1 data1,T2 data2 ){
            a=data1;
            b=data2;
        }
        hclass(T1 data1,T2 data2 , T3 data3){
            a=data1;
            b=data2;
            c=data3;
        }
        void display(){
            cout<<"Value of a : " <<this->a<<"\n"<<endl;
            cout<<"Value of b : " <<this->b<<"\n";
            cout<<"Value of c : " <<this->c<<"\n";
        }
};
int main () 
{
    hclass <int , char> obj(44,'H');
    obj.display();
    hclass <int ,int,  char> obj2(44,3,'H');
    obj2.display();

    hclass <int ,string,  char> obj3(44,"Hardik",'H');
    obj3.display();
    return 0;
}
