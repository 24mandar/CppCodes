#include<iostream>
using namespace std;
class func{
    public:

     func(){
        cout<<"constructor is called";

    }
    ~func(){
        cout<<"destructor is called";
    }
};
int main(){
    func t;
}