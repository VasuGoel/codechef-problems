//
// Created by Vasu Goel on 1/26/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int min, goals, max = 0;
        cin >> min;
        for(int i = 1; i < n; i++) {
            cin >> goals;
            if(goals > min) {
                if(goals - min > max) max = goals - min;
            }
            else min = goals;
        }
        if(max)  cout << max << '\n';
        else  cout << "UNFIT\n";
    }
    return 0;
}