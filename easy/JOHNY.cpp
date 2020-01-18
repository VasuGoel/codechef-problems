//
// Created by Vasu Goel on 1/14/20.
//

#include <iostream>

void bubble_sort(int l[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(l[j] > l[j+1]) {
                int temp = l[j+1];
                l[j+1] = l[j];
                l[j] = temp;
            }
        }
    }
}

int find_index(int l[], int n, int k)
{
    int uj = l[k-1];
    bubble_sort(l, n);
    for(int i = 0; i < n; i++) {
        if(l[i] == uj) {
            return i+1;
        }
    }
}

int main()
{
    int t, n, k;
    std::cin >> t;
    while(t > 0) {
        std::cin >> n;
        int *l = new int[n];
        for(int i = 0; i < n; i++)  std::cin >> l[i];
        std::cin >> k;
        std::cout << find_index(l, n, k) << std::endl;
        delete [] l;
        t--;
    }
    return 0;
}
