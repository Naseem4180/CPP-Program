#include<iostream>
using namespace std;
int main()
{
    int i=1,octal=0,rem;
    int decimal;
    cout<<"The Number in decimal Format"<<endl;
    cin>>decimal;
    while(decimal!=0)
    {
        rem=decimal%8;
        octal += rem*i;
        decimal /=8;
        i*=10;
    }
    cout<<"Decimal to Binary is: "<<octal;
    return 0;
}
