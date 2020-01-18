//
// Created by Vasu Goel on 1/16/20.
//

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, flag = 0;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s.length() < 3) {
            cout << "Bad\n";
            continue;
        }
        for(int i = 0; i < s.length()-2; i++) {
            if((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') || (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')) {
                cout << "Good\n";
                flag = 1;
                break;
            }
        }
        if(flag == 0)   cout << "Bad\n";
        flag = 0;
    }
    return 0;
}
