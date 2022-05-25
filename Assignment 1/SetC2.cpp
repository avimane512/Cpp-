#include<iostream>

using namespace std;
int prime(int n)
{
    int i,flag=1;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }

    }
}
int main()
{
    int i,num;
    cout<<"Enter the Number : ";
    cin>>num;

    for(i=2;i<=num/2;++i)
    {
        if(prime(i))
        {
            if(prime(num-i)){
                cout<<num<<" = "<<i<<" + "<<num-i<<endl;
            }
        }
    }
    return 0;
}