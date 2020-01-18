//
// Created by Vasu Goel on 1/15/20.
//

#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int find_matches(string jewels, string stones) {
    int match = 0;
    for(char s : stones) {
        for(char j : jewels) {
            if(j == s) {
                match++;
                break;
            }
        }
    }
    return match;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string j, s;
    cin >> t;
    while(t--) {
        cin >> j >> s;
        cout << find_matches(j, s) << "\n";
    }
    return 0;
}