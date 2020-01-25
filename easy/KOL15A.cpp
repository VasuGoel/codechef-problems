//
// Created by Vasu Goel on 1/25/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        int sum = 0;
        for(char c : s) {
            if(isdigit(c))  sum += c - '0';
        }
        cout << sum << '\n';
    }
    return 0;
}