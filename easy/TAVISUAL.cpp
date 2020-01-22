//
// Created by Vasu Goel on 1/22/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, c, q, l, r;
    cin >> t;
    while(t--) {
        cin >> n >> c >> q;
        for(int i = 0; i < q; i++) {
            cin >> l >> r;
            if(c < l || r < c)  continue;
            c = l + r - c;
        }
        cout << c << '\n';
    }
    return 0;
}