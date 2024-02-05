#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable to store the input Hexadecimal number
    int Num = 0;

    // Prompt the user to enter a Hexadecimal number
    cout << "Enter the Hexadecimal Number: ";

    // Read the Hexadecimal number
    cin >> hex >>Num;

    // Set the flags to display base and uppercase for hexaHexadecimal
    cout << showbase;
    cout << uppercase;

    // Display the equivalent representations
    cout << "Decimal Format: " << dec <<Num << endl;
    cout << "Octal Format: " << oct << Num << endl;
    cout << "Hexadecimal Format: " << hex << Num << endl;

    // Exit the program with a success code
    return 0;
}