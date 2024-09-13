//C++ Program to Calculate Fahrenheit to Celsius
#include<iostream>
using namespace std;
float Far(float n){
    return (n - 32.0) * 5.0 / 9.0;


}
int main(){
    float n=40;
    cout<<"the value is "<<Far(n);
}