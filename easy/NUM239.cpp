//
// Created by Vasu Goel on 2/1/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t, l, r;
    cin >> t;
    while(t--) {
        cin >> l >> r;
        int count = 0;
        for(int i = l; i <= r; i++)  if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9)  count++;
        cout << count << '\n';
    }
    return 0;
}