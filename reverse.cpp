#include<iostream>
using namespace std;
void reverse(int r)
{
    int rem,rev=0;
    while (r>0)
    {
        rem=r%10;
        rev=rev*10+rem;
        r/=10;
    }
    cout<<rev;
    
}
int main()
{
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    reverse(n);
    return 0;
}