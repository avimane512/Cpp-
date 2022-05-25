#include<iostream>
using namespace std;
class Cylinder
{
    int radius,height;
    public:
    void setradius(float r){
        radius=r;
    }
    void setheight(float h){
        height=h;
    }
    float volume();
    float area();
};

float Cylinder :: volume()
{
    float vol;
    vol=3.143*radius*radius*height;
    return vol;
}
float Cylinder :: area()
{
    float a;
    a=2*3.143*radius*(radius+height);
    return a;
}

int main()
{
    Cylinder c1;
    float vol,ar;
    c1.setradius(14);
    c1.setheight(20);
    ar=c1.area();
    vol=c1.volume();
    cout<<"\nThe Area of the Cylinder is : "<<ar;
    cout<<"\nThe Volume of the Cylinder is : "<<vol;

}