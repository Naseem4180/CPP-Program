#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]={23,54,67,9,10};
    int min1=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(ar[i]<min1)
         min1=ar[i];
    }
    int min2=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(ar[i]>min1 && ar[i]<min2)
        {
            min2=ar[i];
        }
    }
    cout<<"The Smallest Element is "<< min1 <<endl;
    cout<<"The Second smallest Element is "<< min2;

}