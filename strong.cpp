#include<iostream>
using namespace std;
int fact(int n);
void strong(int n);
void strong(int a)
{  
    int sum =0,rem,temp=a;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum + fact(rem);
        temp=temp/10;
    }
    if(sum==a)
    cout<<a<<"  Strong Number";
    else
    cout<<a<<"   Not Strong Number";
    
}
int fact(int n){
    int i,fact=1;
for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int main()
{
    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    cout<<endl;
    strong(n);
    return 0;
    
}