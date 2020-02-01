//
// Created by Vasu Goel on 2/1/20.
//

#include <bits/stdc++.h>
using namespace std;

void decrement(vector<long long> &a, long long max) {
    for(long long i = 0; i < a.size(); i++)  a[i] = max - a[i];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, k, input;
    vector<long long> a;
    cin >> n >> k;
    while(n--) {
        cin >> input;
        a.push_back(input);
    }
    if(k != 0)  k = k % 2 == 0 ? 2 : 1;
    while(k--) {
        long long max_element = *std::max_element(a.begin(), a.end());
        decrement(a, max_element);
    }
    for(long long i : a)  cout << i << " ";
    return 0;
}