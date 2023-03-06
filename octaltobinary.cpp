#include<iostream>
#include<math.h>
using namespace std;
int octdec(int num)
{
    int rem=0,dec=0;
    int i=0;
    while (num!=0)
    {
        rem=num%10;
        dec=dec+rem*pow(8,i);
        num /=10;
        i++;
    }
    return dec;
}
int decbin(int n)
{
    int digit,bin=0;
    int i=1;
    while (n!=0)
    {
        digit=n%2;
        bin=bin+digit*i;
        n /=2;
        i *=10;
    }
    return bin;
}
int main()
{   int oct;
    cout<<"Enter the Number in Octal Format"<<endl;
    cin>>oct;
   int decimal= octdec(oct);
   cout<<"The octal to Decimal is:"<<endl;
   cout<<decimal;
   cout<<"\nThe octal to Binary is:"<<endl;
   cout<<decbin(decimal);
    return 0;
}

