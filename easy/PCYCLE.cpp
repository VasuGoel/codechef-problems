//
// Created by Vasu Goel on 1/19/20.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> visited (1000, 0);
vector<vector<int>> cycles;
int cycle_count = 0;

void traverse(vector<int> &p, int source) {
    vector<int> cycle;
    visited[source] = 1;
    cycle.push_back(source + 1);
    int next_index = p[source] - 1;
    while(next_index != source) {
        visited[next_index] = 1;
        cycle.push_back(next_index + 1);
        next_index = p[next_index] - 1;
    }
    cycle.push_back(next_index + 1);
    cycles.push_back(cycle);
    cycle_count++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, input;
    vector<int> p;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input;
        p.push_back(input);
    }
    for(int i = 0; i < n; i++)  if(!visited[i])  traverse(p, i);
    cout << cycle_count << '\n';
    for(int i = 0; i < cycle_count; i++) {
        for(int j : cycles[i])  cout << j << " ";
        cout << '\n';
    }
    return 0;
}

