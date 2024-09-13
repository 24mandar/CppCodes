#include <iostream>
using namespace std;
template <class T>
T add (T & a, T & b){
    return a+b;
}
int main(){
    int a=10;
    int b=20;
    float c=4.0;
    float d=2.5;
    cout<<"The Value is "<<add(a,b)<<endl;
    cout<<"The Value is "<<add(c,d)<<endl;
}