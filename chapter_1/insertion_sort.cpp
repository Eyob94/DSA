#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 3, 2, 6, 8, 9, 1, 5, 12, 45, 1, 3, 5, 7, 9, 10, 20};

    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int key = arr[i];

        for (int j = i - 1; j >= 0; j--)
        {
            if (key < arr[j])
            {
                arr[j + 1] = arr[j];

                arr[j] = key;
            }
        }
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {

        cout << arr[i] << ", ";
    }
    cout << endl;
}
