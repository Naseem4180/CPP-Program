#include<iostream>
using namespace std;
int gethcf(int x,int y)
{
    return y==0?x:gethcf(y,x%y);
}
int main()
{
    int x,y;
    cout<<"Enter Any Two Number for HCF"<<endl;
    cin>>x>>y;
    int HCF=gethcf(x,y);
    cout<<HCF;
    return 0;
}