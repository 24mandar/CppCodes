#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    //for loop;
    for(int i=0;i<=4;i++){
        for(int j=0;j<4;j++){
            cin>>*((*arr+i)+j);

        }

    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<*(*(arr+i)+j)<<"\t";
        }
        cout<<endl;

    }
    

}