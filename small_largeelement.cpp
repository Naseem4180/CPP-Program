#include<bits/stdc++.h>
using namespace std;
void print(int m);
void minele(int a[],int min,int n);
void maxele(int a[],int max, int n);
void minele(int a[],int min,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Smallest Elemnt is";
    print(min);
    cout<<endl;
}
void maxele(int a[],int max, int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    cout<<"largest Elemnt is";
    print(max);
    cout<<endl;
}
void print(int m)
{
    cout<<m;
}
int main()
{
    int ar[8];
    for(int i=0;i<8;i++)
    cin>>ar[i];
    int max=INT_MIN;
    int min=INT_MAX;
    maxele(ar,max,8);
    minele(ar,min,8);
    return 0;
}