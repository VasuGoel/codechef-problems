//
// Created by Vasu Goel on 1/18/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    string s;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> s;
        int destroyed = 0;
        for(int i = 0; i < n; i++) {
            if((i == 0) && (s[i] == '1' || s[i+1] == '1'))  destroyed++;
            else if((i > 0 && i < n-1) && (s[i-1] == '1' || s[i] == '1' || s[i+1] == '1'))  destroyed++;
            else if((i == n-1) && (s[i] == '1' || s[i-1] == '1'))  destroyed++;
        }
        cout << n - destroyed << '\n';
    }
    return 0;
}