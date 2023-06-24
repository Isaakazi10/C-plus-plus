#include <iostream>
using namespace std;

int main(void)
{
    int size = 0;

    cout << "Enter the size: ";
    cin >> size;

    int arr[size];

    cout << "Enter the int array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];

        if (i + 1 != size)
        {
            cout << " " << (arr[i] + arr[i + 1]) / 2;
        }
    }
}