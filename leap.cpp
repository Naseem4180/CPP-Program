#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any Year"<<endl;
    cin>>n;
    if(n%400==0 || n%4==0 && n%100!=0)
    cout<<"The Year is Leap Year";
    else
    cout<<"Not Leap year";
    return 0;
}