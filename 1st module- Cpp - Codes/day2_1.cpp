#include<iostream>
using namespace std;
class ABC{
    public:
    int A;
    ABC(){
        A=20;
    }

};
int main(){
    const ABC A;
    A.A=30;
    cout<<"the value is "<<A.A<<endl;
}