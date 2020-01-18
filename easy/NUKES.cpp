//
// Created by Vasu Goel on 1/15/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, n, k;
    cin >> a >> n >> k;
    while(k--) {
        cout << a % (n+1) << " ";
        a = a / (n+1);
    }
    cout << "\n";
    return 0;
}