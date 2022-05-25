#include<iostream>
#include<stdlib.h>

using namespace std;

class rectangle2;
class rectangle1
{
    float l,b,a;
    public:
    void getdata()
    {
        cout<<"\nEnter the length and breath: ";
        cin>>l>>b;
    }
    void area()
    {
        a=l*b;
    }
    friend void compare(rectangle1,rectangle2);
};
class rectangle2
{
    float l,b,a;
    public:
    void getdata()
    {
        cout<<"\nEnter the length and breath: ";
        cin>>l>>b;
    }
    void area()
    {
        a=l*b;
    }
    friend void compare(rectangle1,rectangle2);
};

void compare(rectangle1 r1,rectangle2 r2)
{
    if(r1.a > r2.a)
    {
        cout<<"\nRectangle1 has greater Area..";
    }
    else if(r1.a == r2.a)
       cout<<"\nRectangle1 and Rectangle2 have Equal Area..";
    else 
      cout<<"\nRectangle2 has greater Area..";
}

int main()
{
    rectangle1 a1;
    rectangle2 a2;
    a1.getdata();
    a2.getdata();
    a1.area();
    a2.area();
    compare(a1,a2);
}