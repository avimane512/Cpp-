
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using  namespace std;

class District
{
    int d_code,d_area,d_pop,literacy_rate;
    char d_name[20];
    public :
    void getdata();
    void putdata();
    void high_lit(District arr[0],int n);
    void least_pop(District arr[0],int n);

};

void District :: getdata()
{
    cout<<"Enter the District Code: ";
    cin>>d_code;
    cout<<"Enter the District name: ";
    cin>>d_name;
    cout<<"Enter the Area of District (sqft):";
    cin>>d_area;
    cout<<"Enter the Population of District:";
    cin>>d_pop;
    cout<<"Enter the Literacy rate of District: ";
    cin>>literacy_rate;
    cout<<endl;

}

void District ::putdata()
{
    cout<<setw(20)<<setfill(' ')<<d_code<<"  |";
    cout<<setw(20)<<setfill(' ')<<d_name<<"  |";
    cout<<setw(14)<<setfill(' ')<<d_area<<setw(5)<<" Sqft"<<"  |";
    cout<<setw(17)<<setfill(' ')<<d_pop<<"  |";
    cout<<setw(15)<<setfill(' ')<<literacy_rate<<"% "<<"  |";
}

void District :: high_lit(District arr[0],int n)
{
    int i,max=0,high;
    District dr;
    for(i=0;i<n;i++)
    {
        if(arr[i].literacy_rate > max){
         max=arr[i].literacy_rate;
         high=i;
        }
    }
    cout<<endl<<"The District Having Highest Literacy Rate : "<<endl;
    arr[high].putdata();
}
void District :: least_pop(District arr[0],int n)
{
    int i,min=arr[0].d_pop,low;
    for(i=0;i<n;i++)
    {
        if(arr[i].d_pop <= min){
         min=arr[i].d_pop;
         low=i;
        }
    }
    cout<<endl<<"The District Having Least Population : "<<endl;
    arr[low].putdata();
}
int main()
{
    int i,n;
    District *p,d[20];
    cout<<"Enter the Number of Districts: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        d[i].getdata();
    }
    cout<<setw(23)<<setfill(' ')<<"District Code |";
    cout<<setw(23)<<setfill(' ')<<"District Name |";
    cout<<setw(22)<<setfill(' ')<<"District Area |";
    cout<<setw(20)<<setfill(' ')<<"Population |";
    cout<<setw(20)<<setfill(' ')<<"Literacy Rate |"<<endl;
    for(i=0;i<n;i++)
    {
        d[i].putdata();
        cout<<endl;
    }
    d[1].high_lit(d,n);
    d[1].least_pop(d,n);
}