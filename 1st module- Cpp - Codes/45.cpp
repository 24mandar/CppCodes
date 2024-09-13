#include<iostream>
using namespace std;
template <class t1, class t2>
class A{
    t1 a;
    t2 b;
    public:
    A (t1 x, t2 y){
        a=x;
        b=y;


    }
    void display(){
        cout<<"the number is "<<a<<b;

    }


};
int main(){
    A<int ,float>v(5,5.6);
    v.display();
    return 0;
}
