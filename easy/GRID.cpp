//
// Created by Vasu Goel on 2/6/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, i, j;
    cin >> t;
    while(t--) {
        cin >> n;
        char block;
        vector<vector<char>> grid;
        vector<vector<int>> val(n, vector<int>(n, 0));
        for(i = 0; i < n; i++) {
            vector<char> row;
            for(j = 0; j < n; j++) {
                cin >> block;
                row.push_back(block);
            }
            grid.push_back(row);
        }
        for(i = 0; i < n; i++) {
            for(j = n-1; j >= 0; j--) {
                if(grid[i][j] == '#')  break;
                val[i][j] = true;
            }
        }
        for(j = 0; j < n; j++) {
            for (i = n - 1; i >= 0; i--)  if (grid[i][j] == '#') break;
            for (; i >= 0; i--) val[i][j] = false;
        }
        int ways = 0;
        for(i = 0; i < n; i++)  for(j = 0; j < n; j++)  ways += val[i][j];
        cout << ways << '\n';
    }
    return 0;
}