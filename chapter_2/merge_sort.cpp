#include <iostream>
#include <cmath>
using namespace std;

void merge_split(int *, int);
void compare_merge(int *, int, int *, int, int *);

int main()
{

    int x[] = {3, 1, 4, 2, 6, 10, 4, 20, 15, 12, 26, 19, 32};

    merge_split(x, sizeof(x) / sizeof(x[0]));

    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
    {
        cout << x[i] << ",";
    }
    cout << endl;
}

void merge_split(int arr[], int n)
{

    int mid = floor(n / 2);
    int l[mid];
    int r[n - mid];

    for (int i = 0; i < mid; i++)
    {
        l[i] = arr[i];
    }

    for (int i = mid; i < n; i++)
    {
        r[i - mid] = arr[i];
    }

    if (n <= 1)
    {
        return;
    }

    merge_split(l, sizeof(l) / sizeof(l[0]));
    merge_split(r, sizeof(r) / sizeof(r[0]));

    compare_merge(l, sizeof(l) / sizeof(l[0]), r, sizeof(r) / sizeof(r[0]), arr);
}

void compare_merge(int a[], int a_size, int b[], int b_size, int arr[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < a_size & j < b_size)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i += 1;
        }
        else
        {
            arr[k] = b[j];
            j += 1;
        }
        k += 1;
    }

    while (i < a_size)
    {
        arr[k] = a[i];
        i += 1;
        k += 1;
    }

    while (j < b_size)
    {
        arr[k] = b[j];
        j += 1;
        k += 1;
    }
}
