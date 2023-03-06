#include<iostream>
using namespace std;
int main()
{
    int ar[5]={54,37,23,5,67};
    int n=5;
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=ar[start];
        ar[start]=ar[end];
        ar[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}