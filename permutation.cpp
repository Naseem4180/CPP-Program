#include<iostream>
#include<math.h>
using namespace std;
int fact(int n)
{
    int i;
    int fac=1;
    for(i=n;i>=1;i--)
    {
        fac=fac*i;
    }
    return fac;
}
int main()
{
    int num,r;
    cout<<"Enter the Number of Student"<<endl;
    cin>>num;
    cout<<"Enter the Number of Seats"<<endl;
    cin>>r;
    int p=fact(num)/fact(num-r);
    cout<<"permutations n number of students can sit on r number of chairs : "<<p;
    return 0;
}