//making function constant;
#include<iostream>
using namespace std;
class Abc{
    public:
    int a;
    int fun()const 
    {
        a=10;
    }

};
int main(){
    Abc obj;
    cout<<obj.fun();
    

}