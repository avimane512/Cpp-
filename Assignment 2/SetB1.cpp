#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
using namespace std;
class college
{
    int dept_id, e_year, n_fac, n_std;
    char dept_name[20];

public:
    void getdata();
    void putdata();
    void displaybyEyear(college *c, int);
    void sortbyfac(college *c, int);
};

void college ::getdata()
{
    cout << "Enter the Department ID: ";
    cin >> dept_id;
    cout << "Enter the Department Name: ";
    cin >> dept_name;
    cout << "Enter the Establishment Year: ";
    cin >> e_year;
    cout << "Enter the No of Faculty: ";
    cin >> n_fac;
    cout << "Enter the Students: ";
    cin >> n_std;
}

void college ::putdata()
{
    cout << setw(20) << setfill(' ') << dept_id << "  |";
    cout << setw(20) << setfill(' ') << dept_name << "  |";
    cout << setw(19) << setfill(' ') << e_year << "  |";
    cout << setw(17) << setfill(' ') << n_fac << "  |";
    cout << setw(17) << setfill(' ') << n_std << "  |";
}

void college ::displaybyEyear(college *c, int n)
{
    int year, flag = 0, i;
    cout << "\nEnter the Establishment year: ";
    cin >> year;
    cout << "\nDepartment Established on " << year << "is: \n";
    for (i = 0; i < n; i++)
    {
        if (c[i].e_year == year)
        {
            cout << setw(23) << setfill(' ') << "Department ID |";
            cout << setw(23) << setfill(' ') << "Deapartment Name |";
            cout << setw(22) << setfill(' ') << "Establishment Year |";
            cout << setw(20) << setfill(' ') << "No of Faculty |";
            cout << setw(20) << setfill(' ') << "No of Students |" << endl;
            c[i].putdata();
            cout << endl;
            flag = 1;
        }
    }
    if (flag == 0 and i == n)
    {
        cout << "Not Available....\n";
    }
}

void college ::sortbyfac(college *c, int n)
{
    int i, j, max;
    college temp;
    for (i = 0; i < n; i++)
    {
        max = i;
        for (j = i + 1; j < n; j++)
        {
            if (c[j].n_fac > c[max].n_fac)
            {
                max = j;
            }
        }
        temp = c[max];
        c[max] = c[i];
        c[i] = temp;
    }
}
void format()
{
    cout << setw(23) << setfill(' ') << "Department ID |";
    cout << setw(23) << setfill(' ') << "Deapartment Name |";
    cout << setw(22) << setfill(' ') << "Establishment Year |";
    cout << setw(20) << setfill(' ') << "No of Faculty |";
    cout << setw(20) << setfill(' ') << "No of Students |" << endl;
}
int main()
{
    int i, n = 4;
    college d[10];
    for (i = 0; i < n; i++)
    {
        d[i].getdata();
        cout << endl;
    }
    format();
    for (int i = 0; i < n; i++)
    {
        d[i].putdata();
        cout << endl;
    }
    d[0].displaybyEyear(d, n);
    cout<<endl<<"\nDepartment in Desecending Order according to Number of faculty:\n";
    format();
    d[1].sortbyfac(d, n);
    for (int i = 0; i < n; i++)
    {
        d[i].putdata();
        cout << endl;
    }
}