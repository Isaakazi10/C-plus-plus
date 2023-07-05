#include <iostream>

using namespace std;

int main()
{
    time_t my_time, time_arg;

    my_time = time(&time_arg);

    cout << "Time in seconds " << my_time << endl;
    cout << "Time in seconds arguments " << time_arg << endl;

    if (time_arg == my_time)
    {
        cout << "same" << endl;
    }

    return 0;
}