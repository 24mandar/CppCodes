#include<iostream>
using namespace std;
class Employee{
    int id;
    char name[30];
    public:
    void set_data();
    void get_data();

};
void Employee ::set_data(){
     cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;

}
void Employee ::get_data(){
    cout<<id;
    cout<<name;
    cout<<endl;
}
int main(){
    Employee emp [30];
    int n,i;
    cout << "Enter Number of Employees - ";
    cin >> n;
    for (i=1;i<=n;i++){
        (emp+i)->set_data();


    }
    for(i = 1; i < n; i++)
    (emp+i)->get_data();

    getchar();
	getchar();



	
	getchar();
	getchar();
}