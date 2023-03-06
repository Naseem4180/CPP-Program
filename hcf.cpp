#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int h;
    cout<<"Enter Two Numbers";
    cin>>a>>b;
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0 && b%h==0)
        break;
    }
    cout<<"HCF is :"<<h;
    return 0;
}