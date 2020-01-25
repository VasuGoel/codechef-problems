//
// Created by Vasu Goel on 1/25/20.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, input;
    cin >> t;
    while(t--) {
        cin >> n;
        long long total_stones = 0;
        vector<long long> a;
        while(n--) {
            cin >> input;
            a.push_back(input);
        }
        sort(a.begin(), a.end(), greater<long long>());
        for(long long i = 0; i < a.size(); i+=2)  total_stones += a[i];
        cout << total_stones << '\n';
    }

    return 0;
}