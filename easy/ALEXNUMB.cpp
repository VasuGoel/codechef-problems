//
// Created by Vasu Goel on 1/19/20.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    long long n, input;
    cin >> t;
    while(t--) {
        vector<long long> a;
        cin >> n;
        for(int i = 0; i < n; i++)  {
            cin >> input;
            a.push_back(input);
        }
        cout << n*(n-1)/2 << '\n';
    }
    return 0;
}