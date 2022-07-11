#include<iostream>
using namespace std;
int main()
{
    int P,m,W,T,IM,IW,LW,LM;
    P=80000;

    m=(P*52)/100;
    LM=(m*35)/100;
    IM=(m*17)/100;
    W=(P*48)/100;
    LW=(W*13)/100;
    IW=(W*35)/100;
    
    cout<<endl<<"No of Men in town : "<<m;
    cout<<endl<<"No of Litrate Men :  "<<LM;
    cout<<endl<<"No of Illitrate Men :  "<<IM;

    cout<<endl<<"No of Women in town : "<<W;
    cout<<endl<<"No of Litrate Women :  "<<LW;
    cout<<endl<<"No of Illitrate Women :  "<<IW;
    
    return 0;

}