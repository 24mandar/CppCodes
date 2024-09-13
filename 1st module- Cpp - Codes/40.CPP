//object gets constant;
#include <iostream>
using namespace std;
class abc{
    public:
    int a;
    
    abc(){
        a=10;
    }

};
int main(){
    const abc a;
   
    cout<<a.a;

}