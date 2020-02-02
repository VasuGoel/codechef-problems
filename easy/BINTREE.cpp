//
// Created by Vasu Goel on 2/2/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        long long i, j, path = 0;
        cin >> i >> j;
        while(i != j) {
            if(i > j) {
                i /= 2;
                path++;
            } else if (j > i) {
                j /= 2;
                path++;
            }
        }
        cout << path << '\n';
    }
    return 0;
}