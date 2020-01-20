//
// Created by Vasu Goel on 1/20/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        string reverse_alphabets, result;
        for(int i = 0; i < 26; i++)  reverse_alphabets += char(122 - i);
        while(n > 25) {
            result += reverse_alphabets;
            n -= 25;
        }
        for(int i = 0; i <= n; i++)  result = reverse_alphabets[25 - i] + result;
        cout << result << endl;
    }
    return 0;
}