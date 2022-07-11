#include<iostream>
using namespace std;
int main()
{
    int bs,da,ha,gs;

    cout<<endl<<"Enter Basic salary : ";
    cin>>bs;

    da=40*bs/100;
    ha=20*bs/100;
    gs=bs+da+ha;

    cout<<endl<<"Gross Salary is : "<<gs;
    
    return 0;
}