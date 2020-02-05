//
// Created by Vasu Goel on 2/5/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t, n, population, cost;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<long long> p;
        while(n--) {
            cin >> population;
            p.push_back(population);
        }
        sort(p.begin(), p.end());
        long long min_cost = 0;
        for(long long i = 1; i < p.size(); i++) {
            cost = p[0] * p[i];
            min_cost += cost;
        }
        cout << min_cost << '\n';
    }
    return 0;
}