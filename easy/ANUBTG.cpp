//
// Created by Vasu Goel on 1/23/20.
//

#include <bits/stdc++.h>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, input;
    cin >> t;
    while(t--) {
        cin >> n;
        int i = 0, ctr = 0, amount = 0;
        vector<int> costs;
        for(int i = 0; i < n; i++) {
            cin >> input;
            costs.push_back(input);
        }
        int bills = ceil((double) n / 4);
        for(int b = 1; b <= bills; b++) {
            while(ctr < 4 && i < n) {
                int max_index = max_element(costs.begin(), costs.end()) - costs.begin();
                if(ctr >= 2)  costs[max_index] = 0;
                amount += costs[max_index];
                costs[max_index] = -INT_MAX;
                ctr++;
                i++;
            }
            ctr = 0;
        }
        cout << amount << '\n';
    }
    return 0;
}