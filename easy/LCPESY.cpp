//
// Created by Vasu Goel on 2/7/20.
//

//
// Created by Vasu Goel on 2/6/20.
//

#include <bits/stdc++.h>
using namespace std;

int longest_common_pattern(string s, string l) {
    int length = 0;
    for(char c : s) {
        if(l.find(c) != string::npos) {
            length++;
            l.erase(l.begin() + l.find(c));
        }
    }
    return length;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        int length = (a.length() <= b.length()) ? longest_common_pattern(a, b) : longest_common_pattern(b, a);
        cout << length << '\n';
    }

    return 0;
}