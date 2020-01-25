//
// Created by Vasu Goel on 1/25/20.
//

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)  return a;
    return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, input, hcf;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> input;
            hcf = (i == 1) ? input : gcd(input, hcf);
        }
        if(hcf == 1)  cout << n << '\n';
        else  cout << -1 << '\n';
    }

    return 0;
}