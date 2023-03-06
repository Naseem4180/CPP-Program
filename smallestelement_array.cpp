#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]={43,43,92,42,87};
    int min=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(ar[i]<min)
        min=ar[i];
    }
    cout<<"Largest Element is "<<min;
    return 0;
}
