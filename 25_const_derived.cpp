#include<iostream>
using namespace std;

class Base1 {
    int a;
    public:
        Base1(int i){
            a=i;
            cout<<"Base 1 constructor called "<<endl;
        }
        void printbase1(){
            cout<<"Value of data in Base 1 is : "<<a<<endl;
        }
};
class Base2 {
    int b;
    public:
        Base2(int i){
            b=i;
            cout<<"Base 2 constructor called "<<endl;
        }
        void printbase2(){
            cout<<"Value of data in Base 2 is : "<<b<<endl;
        }
};
// class Derived : public Base2 ,public Base1{ // Base2_const. called first
class Derived : public Base1 ,public Base2{ // Base1_const. called first
    int D1,D2;
    public:
        Derived(int a1, int b2 , int c , int d): Base1(a1) , Base2(b2){
            D1=c;
            D2=d;
            cout<<"Constructor of derived class called "<<endl;
        }
        void showData(){
            cout<<"Value of Derived data 1 is : "<<D1<<endl;
            cout<<"Value of Derived data 2 is : "<<D2<<endl;
        }
};
int main () 
{
    Derived d1(1,2,3,4);
    d1.printbase1();
    d1.printbase2();
    d1.showData();
    return 0;
}
