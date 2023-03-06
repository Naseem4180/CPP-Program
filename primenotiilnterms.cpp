#include<iostream>
using namespace std;
int checkprime(int n)
{
 if(n<2){
    return 0;
 }   
 else{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
 }
 return 1;
}
int main()
{
    int num;
    cout<<"Enter N terms for Prime Number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(checkprime(i))
        cout<<i<<" ";
    }
    return 0;
}