#include<iostream>
using namespace std;
int main()
{
    int x,t=1,y;
    cout<<"Enter Any Number"<<endl;
    cin>>x;
    cout<<"Enter the Power to be calculated"<<endl;
    cin>>y;
    for(int i=1;i<=y;i++)
    {
        t=t*x;
    }
    cout<<t;
    return 0;
}