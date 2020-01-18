//
// Created by Vasu Goel on 1/18/20.
//

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, input;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a;
        vector<int>::iterator it;
        for(int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        sort(a.begin(), a.end());
        it = unique(a.begin(), a.end());
        a.resize(distance(a.begin(), it));
        cout << a.size() << '\n';
    }
    return 0;
}

