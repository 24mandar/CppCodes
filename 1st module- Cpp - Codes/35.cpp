//Making Object Constant;
#include<iostream>
using namespace std;
class Abc{
    public:
    int a;
    Abc(){
        a=10;
    }

};
int main(){
    const Abc obj;
    obj.a=20;
    cout<<obj.a;
}