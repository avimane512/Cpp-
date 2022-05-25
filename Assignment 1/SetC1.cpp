#include <iostream>
using namespace std;

int main()
{
    int i, j, n ,space, k = 1;
    cout<<"Enter the number : ";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        space=n-i;
        for (j = 1; j <= space; j++)
        {
            cout<<"\t";
        }
        for(j=0;j<i;j++)
        {
            cout<<"\t"<<k;
            k++;
        }
        cout << "\n";
    }
    //cout<<"Entekjjdf"<<k;
}