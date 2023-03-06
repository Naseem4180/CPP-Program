#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter N Number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=c+i;
    }
    cout<<"The Sum is :"<<c;
    return 0;
}