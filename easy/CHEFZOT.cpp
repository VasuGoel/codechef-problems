//
// Created by Vasu Goel on 1/25/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, count = 0, max_length = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(a != 0)  count++;
        else  count = 0;
        if(count > max_length)  max_length = count;
    }
    cout << max_length << '\n';
    return 0;
}