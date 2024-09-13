#include <iostream>
using namespace std;
int main(){
    int n ,i;
    bool is_prime=true; // first we assume number enter by person is true !


    cout<<"Enter the positive number : ";
    cin >> n;
    if (n == 0|| n == 1)
    {
        is_prime=false;
    }
    for (i=2;i<=n/2;++i){
        if (n%2==0)
        {
            is_prime= false;
        }

        

    }
    if (is_prime) // checking the number is still prime;
    {
        cout<<"num is prime";
    }
    else
    cout<<"is not a prime number";
    
    

}