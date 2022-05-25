#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
using namespace std;

class metro
{
    int m_no, n_seats;
    char m_name[20], st_p[15], dest[15];

public:
    void getdata();
    void putdata();
    void sp_display(metro arr[],int n);
};

void metro ::getdata()
{
    cout << "Enter the Metro No: ";
    cin >> m_no;
    cout << "Enter the Metro Name: ";
    cin >> m_name;
    cout << "Enter the No of Seats: ";
    cin >> n_seats;
    cout << "Enter the Starting Point: ";
    cin >> st_p;
    cout << "Enter the Destination: ";
    cin >> dest;
}

void metro ::putdata()
{
    cout << setw(20) << setfill(' ') << m_no << "  |";
    cout << setw(20) << setfill(' ') << m_name << "  |";
    cout << setw(19) << setfill(' ') << n_seats << "  |";
    cout << setw(17) << setfill(' ') << st_p << "  |";
    cout << setw(17) << setfill(' ') << dest << "  |";
}

void metro ::sp_display(metro *arr, int n)
{
    int flag = 0, i;
    char sp[15], ep[15];
    cout << "\nEnter the Starting point: ";
    cin >> sp;
    cout << "Enter the Ending point: ";
    cin >> ep;
    cout << "\n Metro with Starting point " << sp << " and Destination " << ep << " is " << endl;

    for (i = 0; i < n; i++)
    {

        if (strcmp(arr[i].st_p,sp)==0 && strcmp(arr[i].dest,ep)==0)
        {
            cout << setw(23) << setfill(' ') << "Metro No |";
            cout << setw(23) << setfill(' ') << "Metro Name |";
            cout << setw(22) << setfill(' ') << "No of Seats |";
            cout << setw(20) << setfill(' ') << "Starting Point |";
            cout << setw(20) << setfill(' ') << "Destination |" << endl;
            arr[i].putdata();
            flag = 1;
            break;
        }
    }
    if (flag == 0 and i == n)
    {
        cout << "\n NOt Available...";
    }
}
int main()
{
    int i,n=2;
    char ch;
    metro m[10];
    for (int i = 0; i < n; i++)
    {
        m[i].getdata();
        cout << endl;
    }
    cout << setw(23) << setfill(' ') << "Metro No |";
    cout << setw(23) << setfill(' ') << "Metro Name |";
    cout << setw(22) << setfill(' ') << "No of Seats |";
    cout << setw(20) << setfill(' ') << "Starting Point |";
    cout << setw(20) << setfill(' ') << "Destination |" << endl;
    for (int i = 0; i < n; i++)
    {
        m[i].putdata();
        cout << endl;
    }
    
    do{
    m[0].sp_display(m,n);
    ch=getch();
    }while(ch!='n');


}