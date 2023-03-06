#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"Enetr Any Digit"<<endl;
    cin>>n;
    while (i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
    cout<<n<<" is Perfect Number";
    else
    cout<<n<<" is Not Perfect Number";
    return 0;


}