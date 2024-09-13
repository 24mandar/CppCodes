// armstrong number;
//To check palindrome number;
#include<iostream>
using namespace std;
int main(){
    int n,r;
    int sum=0;
    int temp;
    cout<<"enter the number";
    cin>>n;
    temp=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        cout<<"Armstrong Number."<<endl;
    }
    else
    cout<<"not Armstrong Number."<<endl;
    

}