#include<iostream>
using namespace std;
class cuboid{
    int len,bre,het;
    public:
    cuboid()
    {
        cout<<"Enter len"<<endl;
        cin>>len;
        cout<<"Enter bre"<<endl;
        cin>>bre;
        cout<<"Enter het"<<endl;
        cin>>het;
    }
    void display()
    {
        cout<<endl<<len<<endl<<bre<<endl<<het;
    }
};
int main()
{
    cuboid c1;
    c1.display();
    return 0;
}