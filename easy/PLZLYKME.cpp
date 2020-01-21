//
// Created by Vasu Goel on 1/21/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long double t, l, d, s, c;
    cin >> t;
    while(t--) {
        cin >> l >> d >> s >> c;
        s = s * pow((1 + c), d-1);
        if(s >= l)  cout << "ALIVE AND KICKING\n";
        else  cout << "DEAD AND ROTTING\n";
    }
    return 0;
}