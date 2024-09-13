#include <iostream>
using namespace std;
template<class T>
T add(T & a, T & b){
    int temp;
    temp =a;
    a=b;
    b=temp;
    return (a,b);

}
int main(){
    int a=20;
    int b=10;
    cout<<"The Swapping of number is  "<<add(a,b);
}