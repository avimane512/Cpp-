#include <iostream>
using namespace std;

int main()
{
    int n, i, f;
    cout << "Enter the numbers : ";
    cin >> n;
    if (n > 0)
    {
        cout << "The factors of " << n << " are:   ";
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << i << ", ";
            }
        }
    }
    else
       cout<<"Please Input Positive Integer...";
}