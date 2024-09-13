//No to check greatest of three numbers;
#include<iostream>
using namespace std;
int main(){
    int a=20,b=120,c=60;
    if(a>b&& a>c){
        cout<<"a is great";
    }
    if(b>a&&b>c){
        cout<<"b is great";
    }
    if(c>a&&c>b){
        cout<<"c is great";
    }
}