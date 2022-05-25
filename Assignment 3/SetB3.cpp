#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

class jwellery
{
    int jc, jp;
    static int cnt;
    char jn[13];

public:
    void getdata();
    void putdata();

    static void count()
    {
        cnt++;
    }
    static void showcount()
    {
        cout << "\nCount is " << cnt;
    }
};

int jwellery ::cnt = 0;

void jwellery ::getdata()
{
    cout << "\nEnter the Jwellery Code: ";
    cin >> jc;
    cout << "Enter the Jwellery Name: ";
    cin >> jn;
    cout << "Enter the Jwellery Price: ";
    cin >> jp;
    count();
}
void jwellery ::putdata()
{
    cout << setw(12) << jc << "  |";
    cout << setw(20) << jn << "  |";
    cout << setw(17) << jp << "  |";
    cout << endl;
}
int main()
{
    int i = 0, n;
    jwellery j[10];
    cout<<"\nEnter number of jwellery: ";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        j[i].getdata();
    }
    cout << setw(15) << "Jwellery Code  |";
    cout << setw(23) << "Jwellery Name  |";
    cout << setw(20) << "Jwellery Price  |";
    cout << endl;
    for (i = 0; i < n; i++)
    {
        j[i].putdata();
    }
    jwellery ::showcount();
}