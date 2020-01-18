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
    int t, n;
    cin >> t;
    while(t--) {
        int a, hcf = 0;
        cin >> n;
        while(n--) {
            cin >> a;
            hcf = gcd(hcf, a);
        }
        cout << hcf << '\n';
    }
    return 0;
}