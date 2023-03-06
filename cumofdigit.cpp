#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter Any Digit"<<endl;
    cin>>n;
    while (n>0)
    {
        int r=n%10;
    sum=sum+r;
    n=n/10;
    }
    cout<<"The Sum of the Number is :"<<sum;
    return 0;
    
}