#include<iostream>
using namespace std;
int large(int ar[],int a)
{
    if(a==0)
    return ar[0];
    return (ar(a-1),large(ar,a-1));
}
int main()
{
    int ar[5]={2,4,3,6,7};
    int n=5;
    cout<<"The Largest Element is:"<<large(ar,n);
    return 0;
}