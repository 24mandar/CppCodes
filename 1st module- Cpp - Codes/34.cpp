#include <iostream>
using namespace std;
class abc{
    public:
    int a;
    int fun()const
    {
        int a=20;

    }


};
int main(){
    abc obj;
    obj.fun();
    cout<<obj.a<<endl;

}