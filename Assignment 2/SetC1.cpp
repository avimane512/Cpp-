#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
using namespace std;

class employee
{
    int empno,basic,da,hra,allowances,total;
    char name[15];
    public:
     void getdata();
     void putdata();

};

void employee :: getdata()
{
    cout<<"\nEnter the Employee Number: ";
    cin>>empno;
    cout<<"Enter the Employee Name: ";
    cin>>name;
    cout<<"Enter the Basic Salary: ";
    cin>>basic;
    cout<<"Enter the Dearness Allowance: ";
    cin>>da;
    cout<<"Enter the House Rent Allowance: ";
    cin>>hra;
    cout<<"Enter the Allowances: ";
    cin>>allowances;
    total=basic+da+hra+allowances;
}   

void employee :: putdata()
{
    cout<<setw(20)<<" Employee No.  |";
    cout<<"\t"<<empno<<endl;
    cout<<setw(20)<<"Employee Name  |";
    cout<<"\t"<<name<<endl;
    cout<<setw(20)<<"Basic  |";
    cout<<"\t"<<basic<<endl;
    cout<<setw(20)<<"da  |";
    cout<<"\t"<<da<<endl;
    cout<<setw(20)<<"hra  |";
    cout<<"\t"<<hra<<endl;
    cout<<setw(20)<<"allowances  |";
    cout<<"\t"<<allowances<<endl;
    cout<<endl<<setw(20)<<setfill(' ')<<" ->";
    cout<<"\tTotal Salary: "<<total<<endl;
}


int main()
{
    int i;
    employee e1;
    e1.getdata();
    e1.putdata();
    cout<<endl;
}