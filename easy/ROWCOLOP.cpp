//
// Created by Vasu Goel on 2/5/20.
//

#include <bits/stdc++.h>
using namespace std;

vector<string> tokenize(char instruction[]) {
    vector<string> codes;
    char* token = strtok(instruction, " ");
    while(token != NULL) {
        codes.push_back(token);
        token = strtok(NULL, " ");
    }
    return codes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    cin.ignore();
    vector<int> total_row_increments(n, 0), total_col_increments(n, 0);
    int row_max = 0, col_max = 0;
    while(q--) {
        char instruction[20];
        cin.getline(instruction, 20);
        cin.clear();
        vector<string> tokens = tokenize(instruction);
        string operation = tokens[0];
        int rc = stoi(tokens[1]), x = stoi(tokens[2]);
        if(operation == "RowAdd") {
            total_row_increments[rc - 1] += x;
            if(total_row_increments[rc - 1] > row_max)  row_max = total_row_increments[rc - 1];
        }
        else if(operation == "ColAdd") {
            total_col_increments[rc-1] += x;
            if(total_col_increments[rc - 1] > col_max)  col_max = total_col_increments[rc - 1];
        }
    }
    cout << row_max + col_max << '\n';
    return 0;
}