#include<iostream>
using namespace std;
int main()
{
    int i=1,binary=0,rem;
    int decimal;
    cout<<"The Number in decimal Format"<<endl;
    cin>>decimal;
    while(decimal!=0)
    {
        rem=decimal%2;
        binary += rem*i;
        decimal /=2;
        i*=10;
    }
    cout<<"Decimal to Binary is: "<<binary;
    return 0;
}