// cplusplus.com - reference site
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main () 
{
    //Function object : function wrapped in class so it available like an object
    int arr[8]={9,2,3,4,5,8,3,4};
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,arr+8,greater <int>());
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
