#include<iostream>
using namespace std;

int main()
{
    int a,b,result;
    char opt;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    cout<<"Enter the operator : ";
    cin>>opt;
    switch (opt)
    {
    case '+' : result=a+b;
        break;
    case '-': result=b-a;
        break; 
    case '*': result=a*b;
        break;        
    case '/': result=b/a;
        break; 
    default:
        break;
    }
    cout<<"The result of operation is: "<<result;
    return  0;
}