#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Any Three Number"<<endl;
    cin>>a>>b>>c;
    if(a>b && b>c)
    cout<<"A is Greater";
    else if(b>a && b>c)
    cout<<"B is Greater";
    else
    cout<<"C is Greater";
    return 0;
}