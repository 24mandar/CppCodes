#include <iostream>
using namespace std;
 void add(int a, int b)
{
  cout <<(a+b);
}
 void add(int a, int b, int c)
{
    cout<<(a+b+c);
}
int main()
{
    add(10, 2);
    add(5, 6, 4);
}