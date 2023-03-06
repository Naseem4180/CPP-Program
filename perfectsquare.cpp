#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p,q, n,i;
    cout<<"Enter Any Number";
    cout<<endl;
    cin>>n;
    p=n*n;
    q=sqrt(p);
    if(p==q)
    cout<<n<<" The Number is Perfect Square";
    else
    cout<<n<<" The Number is Not Perfect Square";
    return 0;
}