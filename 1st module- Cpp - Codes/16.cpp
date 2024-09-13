
#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
float  add(float c, float d){
    return c+d;
}
int main(){
    int a=5;
    int b=4;
    float c=3.7;
    float d=5.6;
    cout<<a+b<<endl;
    cout<<c+d<<endl;
}