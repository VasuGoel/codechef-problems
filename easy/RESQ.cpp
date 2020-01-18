//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long n, q = 0, diff = LLONG_MAX;
        cin >> n;
        for (long long int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                q = n / i;
                if (abs(q - i) < diff)  diff = abs(q - i);
            }
        }
        cout << diff << "\n";
    }
    return 0;
}

