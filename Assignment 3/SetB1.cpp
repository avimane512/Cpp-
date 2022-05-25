#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class DB;
class DM
{
    int cm,m;
    public:
    void getdata()
    {
        cout<<"Enter Distance in cm and m: ";
        cin>>cm>>m;
    }
    void putdata(){
        cout<<"\ncm = "<<cm<<" and m = "<<m;
    }
    friend void add(DB,DM);
};

class DB
{
    int feet,inch;
    public:
    void getdata()
    {
        cout<<"\nEnter the Distance in feet and inches: ";
        cin>>feet>>inch;
    }
    friend void add(DB,DM);
};

void add(DB b,DM m)
{
    int addi,addcm,addf,addm;
    addi=m.cm*0.39370079 + b.inch;
    addcm;
    cout<<"";
}