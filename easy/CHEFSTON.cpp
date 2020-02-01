//
// Created by Vasu Goel on 2/1/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long t, n, k;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        long long a[n], b[n];
        for(long long i = 0; i < n; i++)  cin >> a[i];
        for(long long i = 0; i < n; i++)  cin >> b[i];
        long long max = LLONG_MIN, profit;
        for(long long i = 0; i < n; i++) {
            profit = (k / a[i]) * b[i];
            if(profit > max)  max = profit;
        }
        cout << max << '\n';
    }
    return 0;
}