//
// Created by Vasu Goel on 1/13/20.
//

#include <iostream>

int main()
{
    int a, b, diff;
    std::cin >> a >> b;
    diff = a - b;
    if(diff % 10 == 9) std::cout << --diff;
    else std::cout << ++diff;
    return 0;
}

