//
// Created by Vasu Goel on 1/15/20.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int max_diff(vector<long long> &weights, int k) {
    long long min_sum = 0;
    vector<long long>::iterator it;
    while(k--) {
        it = min_element(weights.begin(), weights.end());
        min_sum += *it;
        weights.erase(it);
    }
    return accumulate(weights.begin(), weights.end(), 0) - min_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, k, w;
    cin >> t;
    while(t--) {
        vector<long long> weights;
        cin >> n >> k;
        int m = k > n-k ? n-k: k;
        while(n--) {
            cin >> w;
            weights.push_back(w);
        }
        cout << max_diff(weights, m) << '\n';
    }
    return 0;
}
