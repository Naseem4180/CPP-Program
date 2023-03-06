#include<iostream>
using namespace std;
int gethcf(int x,int y)
{
    return y==0?x:gethcf(y,x%y);
}
int main()
{
    int x,y;
    cout<<"Enter the Two Inputs"<<endl;
    cin>>x>>y;
   int  hcf=gethcf(x,y);
    int lcm=x*y/hcf;
    cout<<"The Lcm is "<<lcm;
    return 0;
}