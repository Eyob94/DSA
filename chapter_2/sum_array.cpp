#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = 0;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        sum += a[i];
    }

    cout << sum;
}