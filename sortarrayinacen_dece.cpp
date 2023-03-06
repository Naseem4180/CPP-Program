#include <iostream>
using namespace std;
int main()
{
    int ar[8] = {3, 2, 4, 1, 10, 30, 40, 20};
    int n = 8;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }

        for (int j = n / 2; j < n - 1; j++)
        {
            if (ar[j] < ar[j + 1])
            {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
}