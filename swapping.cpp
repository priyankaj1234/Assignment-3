#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;

    cout<<endl<<"Enter 1st number : ";
    cin>>a;
    cout<<endl<<"Enter 2nd number : ";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<endl<<"After swapping A : "<<a;
    cout<<endl<<"After swapping B : "<<b;
    
    return 0;
}