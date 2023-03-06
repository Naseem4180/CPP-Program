#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long hexadecimal;
    int digit,decimal=0;
    int i=0;
    cout<<"Enter a Number in Binary"<<endl;
    cin>>hexadecimal;
    while(hexadecimal!=0)
    {
        digit=hexadecimal%10;
        decimal=decimal + digit*pow(16,i);
        hexadecimal=hexadecimal/10;
        i++;
    }
    cout<<"The Binary to decimal is: "<<decimal;
    return 0; 
}