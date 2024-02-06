#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable to store the input decimal number
    int Num = 0;

    // Prompt the user to enter a decimal number
    cout << "Enter the Decimal Number: ";

    // Read the decimal number
    cin >> Num;

    // Set the flags to display base and uppercase for hexadecimal
    cout << showbase;
    cout << uppercase;

    // Display the equivalent representations
    cout << "Decimal Format: " << Num << endl;
    cout << "Octal Format: " << oct << Num << endl;
    cout << "Hexadecimal Format: " << hex << Num << endl;

    // Exit the program with a success code
    return 0;
}