#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    int count=0;
    cout<<"Enter Any Digit of Number"<<endl;
    cin>>n;
    while (n>0)
    {
         n=n/10;
         count ++;
    }
    cout<<"The Numbers are:"<<count;
    return 0;
}