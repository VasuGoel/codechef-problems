//
// Created by Vasu Goel on 1/14/20.
//

#include <iostream>

bool is_even(int n) {
    return n % 2 == 0;
}

int main()
{
    int t, g, i, n, q;
    std::cin >> t;
    while(t > 0) {
        std::cin >> g;
        while(g > 0) {
            std::cin >> i >> n >> q;

            if(is_even(n))  std::cout << n/2 << std::endl;
            else {
                if (i == q) std::cout << (n - 1) / 2 << std::endl;
                else if ((i == 1 && q == 2) || (i == 2 && q == 1)) std::cout << (n + 1) / 2 << std::endl;
            }
            g--;
        }
        t--;
    }
    return 0;
}