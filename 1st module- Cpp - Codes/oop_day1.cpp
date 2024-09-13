#include <iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"\nconstructor executed";
    }
    ~test(){
        cout<<"\ndestructor executed";
    }

};
int main(){
    test t;
}