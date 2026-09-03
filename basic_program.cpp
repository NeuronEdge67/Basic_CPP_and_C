#include <iostream>

double get_user_input()
{
    std::cout << "Enter a Number: ";
    double value;
    std::cin >> value;
    return value;
}

int main()
{
    double num = get_user_input();

    std::cout << "Double of " << num << " is " << num * 2;
    
    return 0;
}