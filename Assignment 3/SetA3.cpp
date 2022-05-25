#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class B;
class A
{
    int x;
    public:
     void getdata(int p){
         x=p;
     }
     void putdata(){
         cout<<"\nx = "<<x;
     }
     friend void sub(A c,B d);
};

class B
{
    int y;
    public:
     void getdata(int p){
         y=p;
     }
     void putdata(){
         cout<<"\nx = "<<y;
     }
     friend void sub(A c,B d);  
};

void sub(A c,B d){
    int subtract;
    subtract = d.y-c.x;
    cout<<"\nSubraction = "<<subtract;
}

int main()
{
    A a1;
    B b1;
    a1.getdata(20);
    a1.putdata();
    b1.getdata(50);
    b1.putdata();
    sub(a1,b1);
}