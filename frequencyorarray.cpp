#include<iostream>
using namespace std;
int main()
{
    int a[]={45,43,67,45,67,10,10,23,45,23};
    int n=sizeof(a)/sizeof(a[0]);
    int match[n];
    int count=1;
    for(int i=0;i<n-1;i++)
    {
        if(match[i]!=1)
        
        for(int j=i+1;j<n;j++){
        if(a[i]=a[j])
        {
            count++;
            match[j]=1;
        }
         cout<<a[i]<<" Occurs at "<<count<<" times "<<endl;
        }
       
    }
    return 0;

}