#include<iostream>
using namespace std;
int main()
{
    int a,b,l=1;
    cout<<"Enter Any Two Numbers";
    cin>>a>>b;
    for(l=a>b?a:b;l<=a*b;l++)
    {
        if(l%a==0 && l%b==0)
        break;
    }
    cout<<"LCM is:"<<l;
    return 0;
}