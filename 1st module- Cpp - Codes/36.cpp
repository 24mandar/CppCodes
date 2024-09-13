//Making Object non Constant;
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
     Abc obj;
    obj.a=20;
    cout<<obj.a;
}