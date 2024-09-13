#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"\n constructor executed";
    }
    ~test (){
        cout<<"\n destructor executed";
    }
};
int main(){
    test t, t1,t2,t3,t4;

}