#include <iostream>
using namespace std;

int main(void)
{
    int num, digit, count = 0;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter the digit to count: ";
    cin >> digit;

    while (0 != num)
    {
        int temp = num % 10;
        num /= 10;

        if (temp == digit)
        {
            count++;
        }
    }

    cout << "Number of count: " << count << endl;
}