//
// Created by Vasu Goel on 1/22/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n , w;
    cin >> t;
    while(t--) {
        cin >> n;
        int max = -1;
        for(int i = 0; i < n; i++) {
            cin >> w;
            if(w + i > max)  max = w + i;
        }
        cout << max << '\n';
    }
    return 0;
}