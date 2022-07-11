#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3,s4,s5,AG,AGP;

    cout<<endl<<"Enter Marks optained in 1st subject : ";
    cin>>s1;
    cout<<endl<<"Enter Marks optained in 32ndrd subject : ";
    cin>>s2;
    cout<<endl<<"Enter Marks optained in 3rd subject : ";
    cin>>s3;
    cout<<endl<<"Enter Marks optained in 4th  subject : ";
    cin>>s4;
    cout<<endl<<"Enter Marks optained in 5th subject : ";
    cin>>s5;

    AG=s1+s2+s3+s4+s5;
    AGP=AG*100/500;
    cout<<endl<<"Aggregate marks opbtained : "<<AG;   
    cout<<endl<<"Aggregate percentage : "<<AGP;

    return 0;

}