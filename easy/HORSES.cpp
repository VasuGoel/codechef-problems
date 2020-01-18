//
// Created by Vasu Goel on 1/14/20.
//

#include <iostream>

int find_mindiff(int s[], int n)
{
    int min_diff = abs(s[0] - s[1]);
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int diff = abs(s[i] - s[j]);
            if(diff < min_diff) min_diff = diff;
        }
    }
    return min_diff;
}

int main()
{
    int t, n;
    std::cin >> t;
    while(t > 0) {
        std::cin >> n;
        int *s = new int[n];
        for(int i = 0; i < n; i++)  std::cin >> s[i];
        int min_diff = find_mindiff(s, n);
        std::cout << min_diff << std::endl;
        delete [] s;
        t--;
    }
    return 0;
}
