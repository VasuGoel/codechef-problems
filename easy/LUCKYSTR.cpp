//
// Created by Vasu Goel on 2/1/20.
//

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, n;
    string b, input;
    vector<string> a;
    cin >> k >> n;
    while(k--) {
        cin >> input;
        a.push_back(input);
    }
    while(n--) {
        int i = 0;
        cin >> b;
        if(b.size() >= 47)  cout << "Good\n";
        else {
            for(i = 0; i < a.size(); i++) {
                if(b.find(a[i]) != string::npos) {
                    cout << "Good\n";
                    break;
                }
            }
            if(i == a.size())  cout << "Bad\n";
        }
    }
    return 0;
}