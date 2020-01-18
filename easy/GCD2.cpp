//
// Created by Vasu Goel on 1/18/20.
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
    int t;
    cin >> t;
    while(t--) {
        int a, n = 0;
        string b;
        cin >> a >> b;
        if(a == 0) {
            cout << b << '\n';
            continue;
        }
        for(int i = 0; i < b.size(); i++) {
            n = ((n * 10) + (b[i] - '0')) % a;
        }
        cout << gcd(a, n) << '\n';
    }
    return 0;
}

