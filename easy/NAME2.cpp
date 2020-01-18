//
// Created by Vasu Goel on 1/18/20.
//

#include <bits/stdc++.h>
using namespace std;

bool check_subsequence(string a, string b) {
    int i, j, k = 0;
    for(i = 0; i < a.size(); i++) {
        for(j = k; j < b.size(); j++) {
            if(a[i] == b[j]) {
                k = j + 1;
                break;
            }
        }
        if(j >= b.size())  break;
    }
    return i == a.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string m, w;
        cin >> m >> w;
        if(check_subsequence((m.size() < w.size()) ? m : w, (m.size() < w.size()) ? w : m))  cout << "YES\n";
        else  cout << "NO\n";
    }
    return 0;
}

