#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class distances
{
    int feet,inch;
    public:
       void getdata();
       void putdata();
    distances sum(distances d2)
    {
    distances d3;
    d3.feet=feet + d2.feet;
    d3.inch=inch + d2.inch;
    return d3;
    }
};

void distances :: getdata()
{
    cout<<"Enter the feet and inch value:";
    cin>>feet>>inch;

}   

void distances :: putdata()
{
    cout<<"The value of feet is : "<<feet<<endl;
    cout<<"The value of inch is : "<<inch<<endl;
}



int main()
{
    distances d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3=d1.sum(d2);
    d1.putdata();
    d2.putdata();
    cout<<endl<<endl;
    d3.putdata();
    return 0;
}