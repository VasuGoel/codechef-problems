//
// Created by Vasu Goel on 1/13/20.
//

#include <iostream>

int main()
{
    int input;
    std::cin >> input;
    while(input != 42) {
        std::cout << input << std::endl;
        std::cin >> input;
    }

    return 0;
}