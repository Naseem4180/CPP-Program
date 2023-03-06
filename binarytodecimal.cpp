#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long num;
    int digit,decimal=0;
    int i=0;
    cout<<"Enter a Number in Binary"<<endl;
    cin>>num;
    while(num!=0)
    {
        digit=num%10;
        decimal=decimal + digit*pow(2,i);
        num=num/10;
        i++;
    }
    cout<<"The Binary to decimal is: "<<decimal;
    return 0; 
}