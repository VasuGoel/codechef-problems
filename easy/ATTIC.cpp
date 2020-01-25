//
// Created by Vasu Goel on 1/25/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string p;
    cin >> t;
    while(t--) {
        cin >> p;
        int i = 0, max_jump = 0, days = 0;
        while(i < p.size()) {
            if(p[i] == '.') {
                int jump_length = 0;
                while(p[i++] == '.') {
                    jump_length++;
                }
                i--;
                if(jump_length > max_jump) {
                    max_jump = jump_length;
                    days++;
                }
            }
            i++;
        }
        cout << days << '\n';
    }
    return 0;
}