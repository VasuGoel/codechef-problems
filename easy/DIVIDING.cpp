//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, i, input;
    unsigned long long sum = 0;
    cin >> n;
    i = n;
    while(i--) {
        vector<long long> c;
        cin >> input;
        c.push_back(input);
        sum += input;
    }
    if(n*(n+1)/2 == sum)  cout << "YES\n";
    else  cout << "NO\n";
    return 0;
}

