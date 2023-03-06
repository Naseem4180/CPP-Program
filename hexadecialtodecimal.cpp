#include<iostream>
#include<math.h>
using namespace std;
int decimal(string n)
{
int len = n.size();
int pos=0,digit;
int decimal=0;
for(int i=len-1;i>=0;i--)
{
    if(n[i]>='0' && n[i]<='9')
    {
        digit=n[i]-48;
        decimal += digit*pow(16,pos);
        pos++;
    }
    else if(n[i]>='A' && n[i]<='F'){

        digit=n[i]-55;
        decimal +=digit*pow(16,pos);
        pos++;
    }
}
return decimal;
}
int main()
{
    string hex;
    cout<<"Enetr the Number in Hexadecimal format";
    cin>>hex;
    cout <<(decimal(hex));
    return 0;
}