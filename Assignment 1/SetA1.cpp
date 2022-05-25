#include<iostream>

using namespace std;

int main()
{
    int i,n=1,j ;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<n;
            n++;
        }
        cout<<"\n";
    }
    return 0;
}
