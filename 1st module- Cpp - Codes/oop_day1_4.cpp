
#include <iostream>
using namespace std;
static int Count = 0;     
class Test {
public:
 
    Test()
    { 
    cout<<this<<endl;
         //Number of times constructor is called
        Count++;
        cout << "No. of Object created: " << Count<< endl;
    }
     ~Test()
    {
         cout<<this<<endl;
        cout << "No. of Object destroyed: " << Count << endl;                                  
        Count--;
        // Number of times destructor is called
    }
};
int main()
{
    Test t;
    cout<<&t<<endl;
	  Test t1;
	  cout<<&t1<<endl;
	  Test t2;
	  cout<<&t2<<endl;
}