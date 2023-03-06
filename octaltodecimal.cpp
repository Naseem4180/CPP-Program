#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long octal;
    int i=0, decimal=0,digit;
    cout<<"Enetr Octal digit";
    cin>>octal;
    while (octal!=0)
    {
        digit=octal%10;
        decimal=decimal+digit*pow(8,i);
        octal=octal/10;
        i++;
    }
    cout<<"The Octal to Decimal is:"<<decimal;
    return 0;
}
