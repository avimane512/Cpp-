#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class area
{
    int num;
    public:
    inline void circle(){
        int r;
        cout<<"\nEnter the radius: ";
        cin>>r;
        cout<<"\nArea of Circle ="<<3.142*r*r<<" sqcm";
    }
    inline void rectangle(){
        int l,b;
        cout<<"\nEnter the length and breath: ";
        cin>>l>>b;
        cout<<"\nArea of Rectangle = "<<l*b<<" sqcm";
    }
    inline void square(){
        int side;
        cout<<"\nEnter the Side of Square: ";
        cin>>side;
        cout<<"\nArea of Square = "<<side*side<<" sqcm";
    }
};

int main()
{
    area a1;
    a1.circle();
    a1.rectangle();
    a1.square();
}