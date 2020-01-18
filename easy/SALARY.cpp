//
// Created by Vasu Goel on 1/16/20.
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
        int n, move = 0, y = INT_MAX;
        cin >> n;
        int s[n];
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            if(s[i] < y)  y = s[i];
        }
        for(int i = 0; i < n; i++) {
            move += s[i] - y;
        }
        cout << move << '\n';
    }
    return 0;
}

