//
// Created by Vasu Goel on 2/3/20.
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
        string s;
        cin >> s;
        long long i = 0, valid_ways = 1;
        if(s.size() % 2 == 1)  if(s[s.size() / 2] == '?')  valid_ways += 25;
        while(i < s.size() / 2) {
            if(s[i] == '?' && s[s.size() - i - 1] == '?')  valid_ways = (valid_ways * 26) % 10000009;
            if(s[i] != '?' && s[s.size() - i - 1] != '?' && s[i] != s[s.size() - i - 1]) {
                valid_ways = 0;
                break;
            }
            i++;
        }
        cout << valid_ways << '\n';
    }
    return 0;
}