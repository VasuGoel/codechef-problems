//
// Created by Vasu Goel on 1/22/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string n;
    cin >> t;
    while(t--) {
        cin >> n;
        int unlucky = 0;
        for(char c : n)  if(c - '0' != 4 && c - '0' != 7)  unlucky++;
        cout << unlucky << '\n';
    }
    return 0;
}

