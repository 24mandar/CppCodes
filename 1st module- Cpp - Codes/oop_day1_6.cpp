#include<iostream>
using namespace std;
class box{
    private:
    int length;
    int *breadth;
    int height;
    public:
    box({
        breadth=new int;
    })
    void set_dimension(int len, int bre,int heigh  ){
        length=len;
        *breadth=bre;
        height=heigh;

        
    }
    void show_data(){
        cout<<"\n length "<<length 
        <<"\n breadth"<<*breadth
        <<"\n height"<<height
        <<endl;
        
    }
    box(box&sample){
        length=sample.length;
        breadth=new int;
        *breadth=*(sample.breadth);
        height = sample.height;
    }
    // Destructors
    ~box()
    {
        delete breadth;
    }

};
int main()
{
       box first;
    first.set_dimension (12, 14, 16);
     first.show_data();
    box second(first);
 
    second.show_data();
 
    return 0;
}