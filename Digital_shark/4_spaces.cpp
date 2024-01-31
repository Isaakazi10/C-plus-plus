#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;

    cout << "Enter the string: ";
    getline(cin, str);

    for (int i = 0; str[i] != 0;)
    {
        if (str[i] == 32 && str[i + 1] == 32)
        {
            for (int j = i; str[j] != 0; j++)
            {
                int temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;

                if (str[j] == 0)
                {
                    break;
                }
            }
        }
        else
        {
            i++;
        }
    }

    printf("%s\n", str.c_str());
}