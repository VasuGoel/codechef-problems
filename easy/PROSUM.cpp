//
// Created by Vasu Goel on 2/10/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, a;
    cin >> t;
    while(t--) {
        cin >> n;
        long long c2 = 0, c = 0;
        for(long long i = 0; i < n; i++) {
            cin >> a;
            if(a == 2)  c2++;
            else if(a > 2)  c++;
        }
        cout << (c2 * c) + (c * (c - 1) / 2) << '\n';
    }
    return 0;
}