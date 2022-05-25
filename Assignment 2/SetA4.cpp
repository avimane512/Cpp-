#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
using namespace std;

class String
{
    char str1[50];
    public:
    void getstring(){
        cout<<"\n Enter the String: ";
        cin>>str1;
    }
    void length();
    void concate(String);
    void rev();
    void compare(String);

};

void String :: length(){
    int len;
    len=strlen(str1);
    cout<<"The length of the String is "<<len<<endl;
}

void String :: concate(String s2){

    strcat(str1,s2.str1);
    cout<<" Conacanating string : "<<this->str1<<endl;
}

void String :: rev(){
    strrev(str1);
    cout<<"The Reversed String is: "<<str1<<endl;
}

void String :: compare(String s2){
    int r;
    r=strcmp(str1,s2.str1);
    if(r==0)
       cout<<"The String "<<this->str1<<" and "<<s2.str1<<" is Equal. "<<endl;
    else 
       cout<<"The String "<<this->str1<<" and "<<s2.str1<<" is not Equal. "<<endl;
         
}

int main()
{
    String s1,s2,s3;
    s1.getstring();
    s1.length();
    s2.getstring();
    s2.length();
    s1.concate(s2);
    s1.rev();
    s2.rev();
    s1.getstring();
    s2.getstring();
    s1.compare(s2);
    return 0;
}