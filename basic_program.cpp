#include <iostream>

int main()
{
    std::cout << "Enter a Integer: ";

    int value{};
    std::cin >> value;
    int double_value{value * 2};

    std::cout << "Double of " << value << " is " << double_value << "\n";
    
    return 0;
}