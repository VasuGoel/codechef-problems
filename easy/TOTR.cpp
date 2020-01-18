//
// Created by Vasu Goel on 1/18/20.
//


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string m;
    cin >> t;
    cin >> m;
    while(t--) {
        string bytelandian, translation;
        cin >> bytelandian;
        for(int i = 0; i < bytelandian.size(); i++) {
            if(isalpha(bytelandian[i])) {
                if(islower(bytelandian[i]))  translation += m[bytelandian[i] - 97];
                else if(isupper(bytelandian[i]))  translation += char(m[bytelandian[i] - 65] - 32);
            } else {
                if(bytelandian[i] == '_')  translation += ' ';
                else  translation += bytelandian[i];
            }
        }
        cout << translation << '\n';
    }
    return 0;
}