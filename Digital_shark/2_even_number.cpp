#include <iostream>
using namespace std;

int main(void)
{
    int size = 0, flag = 0;

    cout << "Enter the size" << endl;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (size % 2 == 1)
    {
        flag = 1;
    }

    if (flag == 0)
    {
        for (int i = 0; i < size / 2; i++)
        {
            cout << arr1[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < (size / 2) + 1; i++)
        {
            cout << arr1[i] << endl;
        }
    }
}

for (int i = 0, j = 0; i < size; i = i + 2)
{
    arr1[j++] = arr[i];
}

for (int i = 0; i < sizeof(arr1) / 4; i++)
{
    for (int j = i + 1; i < size / 2; i++)
    {
        if (arr1[i] > arr1[j])
        {
            int temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
        }
    }
}