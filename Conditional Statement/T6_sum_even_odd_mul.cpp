#include <iostream>
using namespace std;

int main()
{
    int num = 0, mul = 1, sum = 0, count = 0;

    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        int temp = num % 10;
        num = num / 10;

        if (temp % 2 == 0)
        {
            sum = sum + temp;
        }
        else
        {
            mul = mul * temp;
        }

        count++;
    }

    if (count == 6)
    {
        cout << "Sum of even numbers: " << sum << "\nMultiplication of odd numbers: " << mul << endl;
    }
}