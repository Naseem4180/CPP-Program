#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;
    if(n>0)
    cout<<"The Number is Positive";
    else if(n<0)
    cout<<"The Number is Not Positive";
    else
    cout<<"The Number is Zero";
    return 0;
}