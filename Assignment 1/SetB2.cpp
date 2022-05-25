#include<iostream>
using namespace std;

int main()
{
    int n,i,j,result=0;
    cout<<"Enter the Positive integer : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            result=result+j;
        }
    }
    cout<<"The Result of Operation is : "<<result;
    return 0;
}