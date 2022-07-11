#include<iostream>
using namespace std;
int main()
{
    float r,area,circumference,pi;
    pi=3.141;

    cout<<endl<<"Enter radius : ";
    cin>>r;

    area=pi*r*r;
    circumference = 2*pi*r;

    cout<<endl<<"Area of circle is : "<<area;
    cout<<endl<<"Circumference of circle : "<<circumference;

    return 0;
}