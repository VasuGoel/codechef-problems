//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2, n3, input;
    vector<int> v, result;
    cin >> n1 >> n2 >> n3;
    for(int i = 0; i < n1 + n2 + n3; i++) {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] == v[i+1]) {
            result.push_back(v[i]);
            i++;
        }
    }
    cout << result.size() << '\n';
    for(int id : result)  cout << id << '\n';
    return 0;
}