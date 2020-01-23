//
// Created by Vasu Goel on 1/23/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, q;
    cin >> n >> m;
    while(m--) {
        cin >> q;
        int occurrence = 0;
        if(q == n+2 || q == 3*n)  occurrence = 1;
        else if(q > n+2 && q < 3*n) {
            int diff = q - (n + 2);
            occurrence = 1 + diff;
            if(occurrence > n) {
                int factor = occurrence - n;
                occurrence = n - factor;
            }
        }
        cout << occurrence << '\n';
    }
    return 0;
}