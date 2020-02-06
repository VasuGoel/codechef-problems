//
// Created by Vasu Goel on 2/6/20.
//

#include <bits/stdc++.h>
using namespace std;

int visited[100001];
vector<int> connections[100001];
int connected_component_size;

void dfs(int source) {
    visited[source] = 1;
    connected_component_size++;
    for(int child : connections[source])  if(!visited[child])  dfs(child);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, m, i, j;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int k = 0; k < n; k++) {
            visited[k] = 0;
            connections[k].clear();
        }
        for(int k = 0; k < m; k++) {
            cin >> i >> j;
            i--; j--;
            connections[i].push_back(j);
            connections[j].push_back(i);
        }
        int total_connected_components = 0;
        long long ways = 1;
        for(int k = 0; k < n; k++) {
            if(!visited[k]) {
                connected_component_size = 0;
                dfs(k);
                total_connected_components++;
                ways = (long long)(ways * connected_component_size) % 1000000007;
            }
        }
        cout << total_connected_components << " " << ways << '\n';
    }
    return 0;
}