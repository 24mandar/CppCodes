#include <iostream>
using namespace std;
     
class Test{
    public:
    Test(){
        cout<<"\nconstructor is get called";
    } 
    ~Test(){
        cout<<"\ndestructor is get called";
    }

};
int  main(){
    Test t;
    t.~Test();
    t.~Test();
    t.~Test();
    t.~Test();
}

     