//
// Created by Vasu Goel on 2/10/20.
//

#include <bits/stdc++.h>
using namespace std;

typedef struct Frogs {
    long long x_coordinate, position;
    Frogs(long long x_coordinate, long long position) {
        this->x_coordinate = x_coordinate, this->position = position;
    };
} frogs;

bool comparator(frogs f1, frogs f2) {
    return f1.x_coordinate <= f2.x_coordinate;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, k, p, x, a, b;
    cin >> n >> k >> p;
    vector<frogs> f;
    for(long long i = 1; i <= n; i++)  cin >> x, f.push_back(frogs(x, i));
    sort(f.begin(), f.end(), &comparator);
    long long connection[100001] = {0}, count = 1;
    for(long long i = 1; i < n; i++) {
        if(f[i].x_coordinate - f[i-1].x_coordinate <= k) {
            connection[f[i].position] = connection[f[i-1].position];
        } else {
            connection[f[i].position] = count;
            count++;
        }
    }
    while(p--) {
        cin >> a >> b;
        if(connection[a] == connection[b])  cout << "Yes\n";
        else  cout << "No\n";
    }
    return 0;
}