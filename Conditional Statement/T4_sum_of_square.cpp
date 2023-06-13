#include <iostream>
using namespace std;

int main(void)
{
    int num, sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + (i * i);
    }

    cout << "Output: " << sum;
}