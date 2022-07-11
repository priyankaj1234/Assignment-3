#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0;

    cout<<endl<<"Enter a 5 digit number : ";
    cin>>n;

    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    
    cout<<endl<<"Sum = "<<sum;
    return 0;
}