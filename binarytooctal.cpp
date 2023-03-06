#include<iostream>
#include<math.h>
using namespace std;
int dectooct(int temp)
{
    int digit=0,oct=0;int i=1;
    while(temp!=0)
    {
        digit =temp%8;
        oct=oct+digit*i;
        temp/=8;
        i *=10;
    }
    return oct;
}
int bintodec(long long n)
{
    int rem,dec=0;
    int i=0;
    while (n!=0)
    {
        rem=n%10;
        dec=dec+rem*pow(2,i);
        n/=10;
        i++;
    }
    return dec;
}
int main()
{
    long long num;
    cout<<"Enter the Number in Binary Format"<<endl;
    cin>>num;
   int decimal= bintodec(num);
   cout<<"The Binary to Decimal is:"<<endl;
   cout<<decimal;
   cout<<"\nThe Binary to Octal is:"<<endl;
   cout<<dectooct(decimal);
    return 0;
}