//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, d, input, count = 0;
    vector<long long> l;
    cin >> n >> d;
    while(n--) {
        cin >> input;
        l.push_back(input);
    }
    sort(l.begin(), l.end());
    for(long long i = 0; i < l.size() - 1; i++) {
        if(abs(l[i] - l[i+1]) <= d) {
            count++;
            i++;
        }
    }
    cout << count << '\n';
    return 0;
}

