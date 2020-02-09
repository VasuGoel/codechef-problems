//
// Created by Vasu Goel on 2/9/20.
//

#include <bits/stdc++.h>
using namespace std;

bool is_available(string &alphabets, char c) {
    for(char i : alphabets) {
        if(i == c) {
            alphabets.erase(alphabets.begin() + alphabets.find(c));
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        string a, alphabets;
        cin >> a;
        for(int i = 97; i <= 122; i++)  alphabets += (char)i;
        int length = 0;
        for(int i = 0; i < a.size(); i++)  if(is_available(alphabets, a[i]))  length++;
        cout << length << '\n';
    }
    return 0;
}