//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n % 4 == 1)  cout << "ALICE\n";
        else  cout << "BOB\n";
    }
    return 0;
}

