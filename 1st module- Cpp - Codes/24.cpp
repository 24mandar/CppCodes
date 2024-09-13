//Again calculating factorial of number;
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter the number";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
        //1*1=1!
        //1*2=2;
        //2*3=6!
        //6*4=24;
        //24*5=120;


    }
    cout<<fact;
    
}