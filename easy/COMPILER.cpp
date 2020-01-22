//
// Created by Vasu Goel on 1/22/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string expression;
    cin >> t;
    while(t--) {
        cin >> expression;
        int i = 0, count = 0, valid_length = 0;
        while(i < expression.size()) {
            if(expression[i++] == '<')  count++;
            else  count--;
            if(count < 0)  break;
            else if(count == 0) {
                valid_length = i;
            }
        }
        cout << valid_length << '\n';
    }
    return 0;
}