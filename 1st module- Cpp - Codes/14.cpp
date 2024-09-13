// #include<iostream>
// using namespace std;
// int sum(int a , int b=0, int c=0, int d=0){
//     return  (a+b+c+d);

// }
// int main(){
//     cout<<sum(10)<<endl;
//     cout<<sum(10,20)<<endl;
//     cout<<sum(10,20,30)<<endl;
//     cout<<sum(10,20,30,40)<<endl;

// }
#include <iostream>
using namespace std;
void display(char = '*', int = 39);
int main() {
    

    cout << "No argument passed: ";
    display(); 
    
    cout << "First argument passed: ";
    display('#'); 
    
    cout << "Both arguments passed: ";
    display('$', 50); 

    return 0;
}
void display(char b, int count) {
    for(int i = 1; i <= count; ++i)
    {
        cout << b;
    }
    cout << endl;
}