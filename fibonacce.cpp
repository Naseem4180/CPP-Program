#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter Number for Till Series"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<",";
    }
    
}