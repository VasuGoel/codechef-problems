//
// Created by Vasu Goel on 1/15/20.
//

#include <bits/stdc++.h>
using namespace std;

bool cnote(int x, int y, int k, int n, int p, int c) {
    return c <= k && y + p >= x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, x, y, k, n, c, p;
    bool flag = 0;
    cin >> t;
    while(t--) {
        cin >> x >> y >> k >> n;
        while(n--) {
            cin >> p >> c;
            if(cnote(x, y, k, n, p, c) && flag == 0) {
                cout << "LuckyChef\n";
                flag = 1;
            }
            else if(n == 0 && flag == 0) {
                cout << "UnluckyChef\n";
            }
        }
        flag = 0;
    }
    return 0;
}