//To make a member function const;
#include<iostream>
using namespace std;
class BOQ{
    public:
    char A;
    BOQ(){
        A=20;
    }

};
int main(){
    BOQ A;
    A.A=65;
    cout<<"the value is:"<<A.A<<endl;
}