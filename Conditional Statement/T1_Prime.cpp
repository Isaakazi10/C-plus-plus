#include <iostream>
using namespace std;

int main(void)
{
    int num, Flag;

    cout << "Enter a number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        Flag = 0;
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                Flag = 1;
                break;
            }
        }

        if (Flag == 1)
        {
            cout << "Prime Number: " << i << endl;
        }
    }
}