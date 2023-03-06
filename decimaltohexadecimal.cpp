#include<iostream>
using namespace std;
void hexadecimal(int n)
{ int rem=0,pos=0,num=n;
char store[20];
while (num!=0)
{
    rem=num%16;
    if(rem<10)
    {
        store[pos]=rem+48;
        pos++;
    }
    else{
        store[pos]=rem+55;
        pos++;
    }
    num/=16;
}
for(int j=pos-1;j>=0;j--)
cout<<store[j];
}
int main()
{
    int decimal;
    cout<<"Enetr the Number in Decimal"<<endl;
    cin>>decimal;
    hexadecimal(decimal);
    return 0;
}