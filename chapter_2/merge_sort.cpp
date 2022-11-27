#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[] = {3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    int mid = floor(length / 2);

    int L[mid];
    int R[length - mid];

    for (int i = 0; i < mid; i++)
    {
        L[i] = arr[i];
    }
    for (int j = 0; j < length - mid; j++)
    {
        R[j] = arr[mid + j];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < mid & j < length - mid)
    {

        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < mid)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < length - mid)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}