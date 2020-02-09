//
// Created by Vasu Goel on 2/9/20.
//

#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, k, decimal_digits[MAX];
    cin >> t;
    int remainder = 103993 % 33102;
    for(int &decimal_digit : decimal_digits) {
        remainder *= 10;
        decimal_digit = remainder / 33102;
        remainder %= 33102;
    }
    while(t--) {
        cin >> k;
        if(k == 0)  cout << 3;
        else {
            cout << "3.";
            for(int i = 0; i < k; i++)  cout << decimal_digits[i];
        }
        cout << '\n';
    }
    return 0;
}