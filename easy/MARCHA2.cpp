//
// Created by Vasu Goel on 2/5/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        long long k, leaves, stems = 1;
        cin >> k;
        while(k--) {
            cin >> leaves;
            stems = (stems - leaves) * 2;
            if(stems < 0)  break;
        }
        if(!stems)  cout << "Yes\n";
        else  cout << "No\n";
    }
    return 0;
}