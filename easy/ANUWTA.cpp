//
// Created by Vasu Goel on 1/21/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << n + (n * (n+1)/ 2) << '\n';
    }
    return 0;
}