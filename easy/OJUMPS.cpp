//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a;
    cin >> a;
    if(a % 6 == 0 || a % 6 == 1 || a % 6 == 3)  cout << "yes\n";
    else cout << "no\n";
    return 0;
}

