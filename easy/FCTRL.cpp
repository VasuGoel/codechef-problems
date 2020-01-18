//
// Created by Vasu Goel on 1/13/20.
//

#include <iostream>

int trailing_zeros(int n)
{
    int zeros = 0;
    for(int i = 5; i <= n; i *= 5) {
        zeros += n/i;
    }
    return zeros;
}

int main()
{
    int t, n;
    std::cin >> t;
    while(t > 0) {
        std::cin >> n;
        std::cout << trailing_zeros(n) << std::endl;
        t--;
    }
    return 0;
}
