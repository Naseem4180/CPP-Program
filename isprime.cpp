#include<iostream>
using namespace std;
int checkp(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(checkp(n))
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number";
    }
    return 0;
}