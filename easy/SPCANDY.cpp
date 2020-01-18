//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        if(k > 0)  cout << n/k << " " << n%k << '\n';
        else  cout << 0 << " " << n << '\n';

    }
    return 0;
}

