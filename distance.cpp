#include<iostream>
using namespace std;
int main()
{
    int dist,m,f,i,c;

    cout<<endl<<"Enter distance in Km : ";
    cin>>dist;
    
    m=dist*1000;
    c=m*100;
    f=m*3.28084;
    i=c*0.394;

    cout<<endl<<"Distance in meter : "<<m;
    cout<<endl<<"Distanc in Centimeter : "<<c;
    cout<<endl<<"Distance in Feet : "<<f;
    cout<<endl<<"Disatance in Inches : "<<i;

    return 0;

}