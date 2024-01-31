#include <iostream>
using namespace std;

int main(void)
{
    int num, temp1 = 0, temp2 = 0;

    cout << "Enter a  number: ";
    cin >> num;

    temp1 = num;

    while (temp1 != 0)
    {
        temp2 = temp2 * 10 + temp1 % 10;
        temp1 = temp1 / 10;
    }

    cout << "rev_num : " << temp2 << endl;

    if (temp2 == num)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    temp1 = num;
    temp2 = 1;

    while (temp1 != 1)
    {
        temp2 = temp2 * temp1;
        temp1--;
    }

    cout << "Factorial : " << temp2 << endl;
}