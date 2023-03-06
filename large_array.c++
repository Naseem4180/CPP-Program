#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]={43,43,92,42,87};
    int max=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(ar[i]>max)
        max=ar[i];
    }
    cout<<"Largest Element is "<<max;
    return 0;
}
