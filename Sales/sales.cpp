#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item var, sum;
    int count=1;

    if (std::cin >> sum)
    {
        while ((std::cin >> var))
        {
            if (sum.isbn() != var.isbn())
            {
                std::cout << "\n" << sum.isbn() << " " << count << "\n" << std::endl;
                sum = var;
                count=1;
            }
            else
            {
                sum += var;
                count++;
            }
        }     
    }
    else
    {
        std::cerr << "No input" << std::endl;
        return -1;
    }
    std::cout << "\n" << sum.isbn() << " " << count << "\n" << std::endl;
    std::cout << "End of line : " <<std::endl;
}