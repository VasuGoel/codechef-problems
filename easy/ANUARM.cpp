//
// Created by Vasu Goel on 2/9/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        int positions[m], max = INT_MIN, min = INT_MAX;
        for(int i = 0; i < m; i++) {
            cin >> positions[i];
            if(positions[i] > max)  max = positions[i];
            if(positions[i] < min)  min = positions[i];
        }
        for(int i = 0; i < n; i++) {
            cout << ((abs(max - i) > abs(i - min)) ? abs(max - i) : abs(i - min)) << " ";
        }
        cout << '\n';
    }
    return 0;
}
