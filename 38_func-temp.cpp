#include<iostream>
#include<math.h>
using namespace std;

template <class T>
class calc{
    T a,b,c;
    public:
        calc(T x,T y , T z){
            a=x;
            b=y;
            c=z;
        }
        T add(calc &obj){
            return a+obj.a+ b+obj.b+ c+obj.c;
        }
        T mult(calc &obj){
            return a*obj.a+ b*obj.b+ c*obj.c;
        }
        T square(calc &obj){
            return pow(a,obj.a) + pow(b,obj.b) + pow(c,obj.c);
        }
};

template <class T2 , class T3 >

float average( T2 a , T3 b){
    float avg= (a+b)/2.0; // By dividing 2.0 it converts into flaot 
    return avg;
}

template <class S >
void swapp(S &ob1 , S &ob2){
    S temp;
    temp=ob1;
    ob1=ob2;
    ob2=temp;
    
}

int main () 
{
    calc <int>c1(1,2,3);
    calc <int>c2(2,2,2);
    int add = c1.add(c2);
    int mult = c1.mult(c2);
    int square = c1.square(c2);
    cout << "Addition of the numbers : "<<add;
    cout << "\nMultiplication of the numbers : "<<mult;
    cout << "\nSquare : "<<square<<endl;

    //Function template
    float avg1,avg2 ;
    avg1 = average(7,4);
    avg2 = average(5.67,6.67);
    cout<<"\nAverage 1 : "<<avg1<<endl;
    cout<<"Average 2 : "<<avg2<<endl;

    printf("Average 1 is : %.2f\n",avg1);
    printf("Average 2 is : %.3f\n",avg2);

    int a=4,b=6;
    swapp(a , b);
    cout<<"\nValue of a : "<<a<<endl;
    cout<<"Value of b : "<<b<<endl;

    float x=5.4,y=8.34;
    swapp(x,y);
    cout<<"\nValue of x : "<<x<<endl;
    cout<<"Value of y : "<<y<<endl;
    return 0;
}
