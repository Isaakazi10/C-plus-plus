#include <iostream>
using namespace std;

int main(void)
{
    int num = 0;

    cout << "Enter the number : ";
    cin >> num;

    for (int x = 1; x < num; x++)
    {
        for (int y = (x + 1); y < num; y++)
        {
            for (int z = (y + 1); z < num; z++)
            {
                if ((x * x + y * y) == (z * z))
                {
                    cout << "X : " << x << " Y : " << y << " Z : " << z << endl;
                }
            }
        }
    }
}