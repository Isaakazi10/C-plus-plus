#include <iostream>
using namespace std;

int main(void)
{
    int size = 0, flag = 0;

    cout << "Enter the size : ";
    cin >> size;

    int arr1[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    int arr2[size / 2];

    for (int i = 1, j = 0; i < size; i = i + 2)
    {
        arr2[j++] = arr1[i];
    }

    for (int i = 0; i < (size / 2) - 1; i++)
    {
        for (int j = i + 1; j < (size / 2); j++)
        {
            if (arr2[i] > arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    for (int i = 0; i < size / 2; i++)
    {
        cout << " " << arr2[i];
    }
}