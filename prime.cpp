#include<iostream>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter Any Prie Number";
    cin>>n;
    for( i=2;i<=n;i++)
    {
        if(n%i==0)
        return;
    }
    if(i==n)
    cout<<"The Number is Prime Numbe";
    else
    cout<<"Not Prime Number";
    return 0;
}