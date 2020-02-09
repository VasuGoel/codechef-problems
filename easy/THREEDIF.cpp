//
// Created by Vasu Goel on 2/9/20.
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
        long long n[3];
        for(int i = 0; i < 3; i++)  cin >> n[i];
        sort(n, n + 3);
        long long triples = 1;
        for(int i = 0; i < 3; i++)  triples = (triples * ((n[i] - i) % 1000000007)) % 1000000007;
        cout << triples << '\n';
    }
    return 0;
}