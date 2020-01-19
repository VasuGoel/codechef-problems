//
// Created by Vasu Goel on 1/19/20.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(360 % n == 0)  cout << "y ";
        else  cout << "n ";

        if(n <= 360)  cout << "y ";
        else  cout << "n ";

        if(n * (n + 1) / 2 <= 360)  cout << "y\n";
        else  cout << "n\n";
    }
    return 0;
}
