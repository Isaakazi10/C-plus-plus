#include <iostream>
using namespace std;

int main()
{
    int limit = 0, sum = 0, res = 0;

    cout << "Enter the number : ";
    cin >> limit;

    for (int i = 1; res + sum <= limit; i = i * 10)
    {
        sum = sum + i;
        res = res + sum;
    }

    cout << res << endl;
}