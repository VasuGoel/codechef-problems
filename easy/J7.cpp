//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, p, s;
    double l, v;
    cin >> t;
    while(t--) {
        cin >> p >> s;
        l = (p - sqrt(pow(p, 2) - 24*s)) / 12;
        v = pow(l, 2) * (p/4 - 2*l);
        cout << fixed << setprecision(2) << v << '\n';
    }
    return 0;
}

