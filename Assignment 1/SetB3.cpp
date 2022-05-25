#include<iostream>
using namespace std;

int main()
{
    int n,i=0,j,temp=1,num;
    char a[100];
    cout<<"Enter the Number : ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        temp=n%16;
        if(temp<10)
        {
            a[i]=temp+48;
            i++;
        }
        else{
            a[i]=temp+55;
            i++;
        }
        n=n/16;
    }
    
    cout<<"\n Converted Number is ";
    for(j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
}