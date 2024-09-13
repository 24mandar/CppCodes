//No of times constructor and destructor is called;
#include<iostream>
using namespace std;
static int count =0;
 
class test{
    public: 
        
    test(){
        count++;
        cout<<"\nconstructor is called"<<count<<endl;

    }
    ~test(){
        count--;
        cout<<"\ndestructor is called"<<count<<endl;
    }

};
int main(){
    test t, t1,t2,t3,t4;
}