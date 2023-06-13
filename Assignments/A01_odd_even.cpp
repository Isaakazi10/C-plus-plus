/*
Name        : ISAA KAZI
Date        : 09/01/2023
Description : A1 - WAP to check if number is odd or even
Sample I/O  : Enter the value of 'n' : -2
Sample O/P  : -2 is negative even number
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter the value of n: ";
    cin >> num;

    if (num == 0)
    {
        cout << "0 is neither odd nor even\n";
        return 0;
    }

    if ((num % 2 == 0) && (num > 0))
    {
        cout << num << " is pos even numb\n";
    }
    else if ((num % 2 == 1) && (num > 0))
    {
        cout << num << " is pos odd numb\n";
    }
    else if ((num % 2 == 0) && (num > 0))
    {
        cout << num << " is neg even numb\n";
    }
    else
    {
        cout << num << " is neg odd number\n";
    }
}