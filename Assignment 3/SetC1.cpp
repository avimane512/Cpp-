#include<iostream>
#include<stdlib.h>

using namespace std;

class complex
{
    
    public:
    int real,imaginary;
    complex()
    {
        real=0;
        imaginary=0;
    }
    complex(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    complex add_complex(complex c1,complex c2)
    {
        complex res;
        res.real=c1.real+c2.real;
        res.imaginary=c1.imaginary+c2.imaginary;
        return res;
    }
};

int main()
{
    complex c1(4,5);
    cout<<"\nComplex Number 1:- "<<c1.real<<" + i"<<c1.imaginary;
    complex c2(8,9); 
    cout<<"\nComplex Number 2:- "<<c2.real<<" + i"<<c2.imaginary;
    complex c3;
    c3=c3.add_complex(c1,c2);
    cout<<"\n The Additon  is "<<c3.real<<" + i"<<c3.imaginary<<endl;
    
}