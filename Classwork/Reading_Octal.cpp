#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable to store the input octal number
    int Num = 0;

    // Prompt the user to enter an octal number
    cout << "Enter the Octal Number: ";

    // Read the octal number using the 'oct' manipulator
    cin >> oct >> Num;

    // Check if the entered number is a valid octal number
    if ((Num % 8 == 0) || (Num % 8 == 1) || (Num % 8 == 2))
    {
        cout << "Not an Octal Number";
        return 1; // Exit the program with an error code
    }

    // Set the flags to display base and uppercase for hexadecimal
    cout << showbase;
    cout << uppercase;

    // Display the equivalent representations
    cout << "Decimal Format: " << dec << Num << endl;
    cout << "Octal Format: " << oct << Num << endl;
    cout << "Hexadecimal Format: " << hex << Num << endl;

    // Exit the program with a success code
    return 0;
}
