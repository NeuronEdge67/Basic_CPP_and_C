#include <iostream>

bool is_equal(int x, int y){
    return x == y;
}

// double get_user_input()
// {
//     std::cout << "Enter a Number: ";
//     double value;
//     std::cin >> value;
//     return value;
// }

int main()
{

    std::cout << "Enter a integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha;

    std::cout << "Is " << x << " and " << y << " equal? ";
    std::cout << is_equal(x, y) << "\n";


    // double num;
    
    // num = get_user_input();

    // std::cout << "Double of " << num << " is " << num * 2;
    
    return 0;
}