//
// Created by Vasu Goel on 2/9/20.
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
        int messages[n], count = 0;
        for(int i = 0; i < n; i++)  cin >> messages[i];
        for(int i = 0; i < n; i++) {
            if(i == 0)  {
                if(messages[i] != messages[i+1])  count++;
            } else if(i == n - 1) {
                if(messages[n-1] != messages[n-2])  count++;
            } else {
                if(messages[i] != messages[i-1] || messages[i] != messages[i+1])  count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}