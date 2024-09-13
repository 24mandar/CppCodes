#include <iostream>
using namespace std;
class temp{
    public:
    void show();
    void show()const;
};
void temp:: show(){
    cout<<"This is non -const function";
}
void temp::show()const{
    cout<<"this is non constant function";
}
int main(){
    temp t ;
    t.show();
    
}
