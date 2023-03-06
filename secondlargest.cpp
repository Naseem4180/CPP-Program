#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={65,76,34,56,98};
    int max1=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(a[i]>max1)
        max1=a[i];
    }
    int max2=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(max1>a[i] && max2 < a[i])
        max2=a[i];
    }
    cout<<"The Largest Element is "<< max1 <<endl;
    cout<<"The Second Largest Element is "<< max2;
    return 0;
}