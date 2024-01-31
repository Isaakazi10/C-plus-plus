#include <iostream>
using namespace std;

int main(void)
{
    int num, power, res = 1;

    cout << "Enter the number and its power : ";
    cin >> num >> power;

    while (power-- != 0)
    {
        res = res * num;
    }

    cout << res;
}