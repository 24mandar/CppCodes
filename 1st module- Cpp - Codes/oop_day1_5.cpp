#include <iostream>
using namespace std;
     
class Test {
	private:
		static int cnt1;
		static int cnt2;
public:
 static int getcnt1()
 {
 	return cnt1;
 }
 static int getcnt2()
 {
 	return cnt2;
 }
    Test()
    { 
    cnt1++;
       cout<<this<<endl;//AAA BBB
       cout<<"constructor is called\n";
    }
     ~Test()
    {
    	cnt2++;
       cout<<"destructor is called\n"; 
	   cout<<this<<endl; //BBB AAA
    }
};
int Test ::cnt1=0;
int Test::cnt2=0;
int main()
{
    Test t;
    cout<<&t<<endl;//AAA
	  Test t1;
    cout<<&t1<<endl;//BBB
   cout<<"no of cons called"<< Test::getcnt1()<<endl;
   cout<<"no of dest called"<< Test::getcnt2()<<endl;


}