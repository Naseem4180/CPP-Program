#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n = num;
    int i = 10;
    while (n != 0)
    {
        if (n % 10 == 0)
        num = num + i / 10;
        n = n / 10;
        i = i * 10;
    }
    cout << num;
    return 0;
}