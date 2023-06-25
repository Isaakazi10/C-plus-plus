#include <iostream>
using namespace std;

int main(void)
{
    int num, temp, res = 0;

    cout << "Enter the number : ";
    cin >> num;

    while (num != 0)
    {
        temp = num % 10;
        num = num / 10;

        switch (temp)
        {

        case 0:
            cout << "Zero ";
            break;

        case 1:
            cout << "One ";
            break;

        case 2:
            cout << "Two ";
            break;

        case 3:
            cout << "Three ";
            break;

        case 4:
            cout << "Four ";
            break;

        case 5:
            cout << "Five ";
            break;

        case 6:
            cout << "Six ";
            break;

        case 7:
            cout << "Seven ";
            break;

        case 8:
            cout << "Eight ";
            break;

        case 9:
            cout << "Nine ";
            break;

        case 10:
            cout << "Ten ";
            break;
        }
    }
}