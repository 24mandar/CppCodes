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
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        cout<<"number is pali";
    }
    else
    cout<<"Not Pali";
    

}