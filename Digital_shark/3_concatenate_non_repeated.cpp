#include <iostream>
using namespace std;

int main(void)
{
    int size = 0, minus = 0;

    cout << "Enter the positive size: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size - minus;)
    {
        int count = 0;

        for (int k = i + 1; k < size; k++)
        {
            if (arr[i] == arr[k])
            {
                ++count;
            }
        }

        if (count == 0)
        {
            minus++;

            for (int j = i; j < size - 1; j++)
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            continue;
        }
        else
        {
            i = i + count + 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}