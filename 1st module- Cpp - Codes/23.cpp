// check prime again by me!
#include<iostream>
using namespace std;
int main(){
    int num,i;
    bool is_prime=true; // Assume the number sent by user is true;
    cout<<"Enter the positive number : ";
    cin>>num;
    if (num==0||num==1)
    {
        is_prime=false;
    }
    for (i=2;i<=num/2;i++)
    {
        if (num%2==0)
        {
            is_prime= false;
        }
        
    }
    if (is_prime)
    {
        cout<<"the number is prime";
    }
    else
    cout<<"the number is not prime";
    

    
    

}
    

