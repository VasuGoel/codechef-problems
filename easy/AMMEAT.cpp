//
// Created by Vasu Goel on 2/4/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        long long l[n], i = 0, total = 0, plates = 0;
        for(long long i = 0; i < n; i++)  cin >> l[i];
        sort(l, l+n, greater<long long>());
        while(i < n) {
            total += l[i];
            if(total >= m)  break;
            i++;
        }
        if(total >= m)  cout << i + 1 << '\n';
        else  cout << -1 << '\n';
    }
    return 0;
}