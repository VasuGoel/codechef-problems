//
// Created by Vasu Goel on 2/12/20.
//

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)  return a;
    return gcd(b, a%b);
}

int smallest_prime(int a) {
    for(int i = 2; i <= floor(sqrt(a)); i++)  if(a % i == 0)  return i;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, input;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++)  cin >> input, a.push_back(input);
        int hcf = a[0];
        for(int i : a)  hcf = gcd(i, hcf);
        if(hcf != 1)  cout << smallest_prime(hcf) << '\n';
        else  cout << -1 << '\n';
    }
    return 0;
}