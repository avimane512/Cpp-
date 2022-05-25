#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;

class root
{
    int x;
    public:
    void getdata(){
        cout<<"\nEnter the number: ";
        cin>>x;
    }
    inline void square()
    {
        cout<<"\nSquare root of "<<x<<" = "<<sqrt(x); 
    }
    inline void cube()
    {
        cout<<"\nCube root of "<<x<<" = "<<cbrt(x);
    }
};

int main()
{
    root r1;
    r1.getdata();
    r1.square();
    r1.cube();

}