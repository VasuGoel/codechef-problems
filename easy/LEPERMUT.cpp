//
// Created by Vasu Goel on 1/17/20.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, inversions = 0, local_inversions = 0, input;
        vector<int> a;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> input;
            a.push_back(input);
        }
        for(int i = 0; i < n-1; i++) {
            if(a[i] > a[i+1])  local_inversions++;
            for(int j = i+1; j < n; j++) {
                if(a[i] > a[j])  inversions++;
            }
        }
        if(inversions == local_inversions)  cout << "YES\n";
        else  cout << "NO\n";
    }
    return 0;
}
