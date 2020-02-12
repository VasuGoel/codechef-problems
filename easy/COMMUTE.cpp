//
// Created by Vasu Goel on 2/12/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x, l, f;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> x >> l >> f;
        int time = x+l;
        for(int i = 1; i < n; i++) {
            cin >> x >> l >> f;
            if(time < x)  time = x;
            else if(time > x) {
                while(x < time)  x += f;
                time = x;
            }
            time += l;
        }
        cout << time << '\n';
    }
    return 0;
}