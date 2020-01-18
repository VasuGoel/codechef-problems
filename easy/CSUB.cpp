//
// Created by Vasu Goel on 1/16/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, count = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        char s[n];
        for(long long i = 0; i < n; i++) {
            cin >> s[i];
            if(s[i] == '1')  count++;
        }
        cout << count*(count+1)/2 << '\n';
        count = 0;
    }
    return 0;
}

