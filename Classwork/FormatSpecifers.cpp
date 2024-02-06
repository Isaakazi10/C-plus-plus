#include <iostream>

int main()
{
    int Num_1 = 10, Num_2 = 8;
    float Flo = 20.666;
    char ch = 'A';

    std::cout << std::showbase; // This Flag will show base of a Number
    std::cout << std::showpos; // This Flag will show  '+' in front of positive number.
    std::cout << std::uppercase; // Shows Base format in uppercase

    // Integer [Hexadecimal, Octal, Decimal]
    std::cout << "Num_1 in Decimal : " << Num_1 << std::endl;
    std::cout << "Num_1 in Hexadecimal : " << std::hex << Num_1 << std::endl;
    std::cout << "Num_1 in Octal : " << std::oct << Num_1 << std::endl;
    std::cout << "Num_2 in decimal is 8 but will be same in same format as last flag: " << Num_2 << std::endl;
    std::cout << "So to get the output in decimal format we have to set the decimal flag : " << std::dec << Num_2 << std::endl;

    std::cout << std::noshowbase; // This Flag will stop showing base of a Number
    std::cout << std::noshowpos; // This Flag will stop showing  '+' in front of positive number.
    std::cout << std::nouppercase; // Stops Showing Base format in uppercase

    // For showing ASCII value we have to typecast
    std::cout << "Charecter : " << ch << std::endl;
    std::cout << "ASCII : " << (int)ch << std::endl;

    // Format Specifer for Float
    std::cout << "Float : " << Flo << std::endl; // Same as %g in C language
    std::cout << "Float scientific : " << std::scientific << Flo << std::endl; // Same as %e in C language
    std::cout << "Float fixed : " << std::fixed << Flo << std::endl; // Same as %f in C language
}