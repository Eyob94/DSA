#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 2, 1, 1, 8, 2, 4, 12, 6, 8, 17, 22, 20, 16};

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        int key = a[i];
        for (int j = i + 1; j < sizeof(a) / sizeof(a[0]); j++)
        {
            if (a[j] < key)
            {
                a[i] = a[j];
                a[j] = key;
                key = a[i];
            }
        }
    }

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        cout << a[i] << ",";
    }
}