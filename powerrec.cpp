#include<iostream>
using namespace std;
int power(int a, int b)
{
    if(b==0)
    return 1;
    return a*power(a,b-1);
}
int main()
{
    int x,y;
    cout<<"Enter the Number"<<endl;
    cin>>x;
    cout<<"Enter the Power"<<endl;
    cin>>y;
    cout<<"The Required Power is : "<<power(x,y);
}