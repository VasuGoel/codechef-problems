//
// Created by Vasu Goel on 1/20/20.
//

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

vector<int> to_binary(long long x, int n) {
    vector<int> binary (n, 0);
    if(x != 0) {
        while(x != 1) {
            binary[--n] = x % 2;
            x = x / 2;
        }
        binary[--n] = 1;
    }
    return binary;
}

int count_ones(vector<int> &x) {
    int count = 0;
    for(int i : x)  if(i == 1)  count++;
    return count;
}

int max_xor(int x, int n) {
    double decimal = 0;
    if(x == n) {
        for(int i = 0; i < n; i++) {
            decimal += pow(2, i);
        }
    } else {
        for(int i = 0; i < n; i++) {
            if(i < n-x)  continue;
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    long long a, b;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> a >> b;
        vector<int> binary_a = to_binary(a, n);
        vector<int> binary_b = to_binary(b, n);
        int total_1s = count_ones(binary_a) + count_ones(binary_b);
        if(total_1s == n)  cout << max_xor(n, n) << "\n";
        else if(total_1s > n) {
            int diff = total_1s - n;
            cout << max_xor(n - diff, n) << "\n";
        } else if(total_1s < n) {
            cout << max_xor(total_1s, n) << "\n";
        }
    }
    return 0;
}