#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class article
{
    int aid,aqty;
    float aprice;
    char aname[20];
    public:
    void getdata();
    void putdata();
    void display(float);
    void display(int);
};

void article :: getdata()
{
    cout<<"\nEnter Article ID: ";
    cin>>aid;
    cout<<"Enter Article Name: ";
    cin>>aname;
    cout<<"Enter Article Quantity: ";
    cin>>aqty;
    cout<<"Enter Article Price: ";
    cin>>aprice;
}

void article :: putdata()
{
    cout<<setw(20)<<aid<<"  |";
    cout<<setw(20)<<aname<<"  |";
    cout<<setw(23)<<aqty<<"  |";
    cout<<setw(20)<<aprice<<"  |";
    cout<<endl;
}

void article :: display(float price)
{
    if(aprice >= price)
      putdata();
}

void article :: display(int qty)
{
    if(aqty >= qty)
      putdata();
}

int main()
{
    int n,i,qt=50;
    float p=500;
    article a[20];
    cout<<"Enter the number of aricle: ";
    cin>>n;
    for(i=0;i<n;i++)
      a[i].getdata();
    cout<<setw(23)<<"Article ID  |";
    cout<<setw(23)<<"Article Name  |";
    cout<<setw(26)<<"Article Quantity  |";
    cout<<setw(23)<<"Article Price  |"<<endl;  
    for(i=0;i<n;i++)
      a[i].putdata();
    cout<<endl<<"Articles Whose Price exceeds 500"<<endl;  
    for(i=0;i<n;i++)
      a[i].display(p);
    cout<<endl<<"Articles Whose Quantity exceeds 50"<<endl;  
    for(i=0;i<n;i++)
      a[i].display(qt);         
    return 0;  
}