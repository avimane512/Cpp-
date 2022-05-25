#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>

using namespace std;

class A
{
    public:
    void area(double s1,double s2,double s3){
        double p,a;
        p=(s1+s2+s3)/2;
        a=sqrt((p*(p-s1)*(p-s2)*(p-s3)));
        cout<<"\nArea of Right angled triangle: "<<a;

    }
    void area(double s1,double s2){
        double p,a;
        p=(s1+s2)/2;
        a=sqrt((p*(p-s1)*(p-s2)));
        cout<<"\nArea of Right angled triangle: "<<a;
    }
    void area(double){

    }
};
int main()
{
    
    return 0;
}