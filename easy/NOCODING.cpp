//
// Created by Vasu Goel on 1/26/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string a;
    cin >> t;
    while(t--) {
        cin >> a;
        int instructions = 2;  // load first value and print it
        for(int i = 0; i < a.size() - 1; i++) {
            if(a[i] <= a[i+1])  instructions += (a[i+1] - a[i]) + 1;
            else  instructions += (26 - (a[i] - a[i+1])) + 1;
        }
        if(instructions <= a.size() * 11)  cout << "YES\n";
        else  cout << "NO\n";
    }
    return 0;
}