//fibonacci series;
#include<iostream>
using namespace std;
int main(){
    int n,i;
    int n1=0,n2=1;
    int n3;
    cout<<"Enter the number";
    cin>>n;
    cout<<n1<<""<<n2<<endl;
    for (i=2;i<n;i++){
        n3=n1+n2;
        cout<<n3;
        n1=n2;
        n2=n3;

    }

}