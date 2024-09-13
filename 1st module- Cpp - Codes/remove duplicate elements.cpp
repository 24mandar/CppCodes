// To remove duplicate element from an array;
#include<iostream>
using namespace std;
int main(){
    int num;    
    int i;
    int j;
    int k;
    cout<<"Enter the elements"<<endl;
    cin>>num;
    char arr[num];
    for(i=0;i<=num-1;i++){
        cin>>arr[i];
    }
    for(i=0;i<=num-1;i++){
        cout<<arr[i];
    }
    for (i=0; i<=num-2;i++){
        for (j=i+1,k=j+1;k<=num-2, j<=num-1; j++){
            if (arr[i]==arr[j]){
                arr[j]=arr[k];
                k++;
            }

        }
        cout<<endl;
        for(i=0;i<num-1; i++){
            cout<<arr[i];
        }
    }
    

    
    
    

    
}
