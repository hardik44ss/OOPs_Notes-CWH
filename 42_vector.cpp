#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying vector : ";
    for(T n : v){
        cout<<n<<" ";
    }
    cout<<"\n\tSize : "<<v.size();
    cout<<endl;
}

int main () 
{
    vector<int> vec1;//Zero length integer vector
    display(vec1);
    vector<char> vec2; // 4 length charactor vector
    vec2.push_back('H');//pushback increase  the size of vector and add element to it
    vec2.push_back('A');
    vec2.push_back('R');
    vec2.push_back('D');
    display(vec2);
    cout<<"\tFront element is : "<<vec2.front()<<endl;
    cout<<"\tBack element is : "<<vec2.back()<<endl;
    // cout<<"\n Maximum : "<<vec2.max_element(vec2.begin(), vec2. end());

    vector<char> vec3(vec2);
    display(vec3); // 4 length charactor vector from vec2

    vector <char> vec4(6,'H');
    display(vec4); // Vector of length 6 with all elements 'H'

    vec4.clear();
    display(vec4); // Empty vector after clear()


    return 0;
}
