#include <iostream>
using namespace std;

int main(void)
{
    int num, Flag, rev = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        int temp = num % 10;
        num /= 10;
        rev = rev * 10 + temp;
    }

    cout << "Rev number: " << rev << endl;
}