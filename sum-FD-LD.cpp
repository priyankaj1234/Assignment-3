#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,FD,LD;

    cout<<endl<<"Enter a 4 digit number : ";
    cin>>n;

    LD=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    
    FD=n;
    sum =LD+FD;
    cout<<endl<<"Sum = "<<sum;
    return 0;
}