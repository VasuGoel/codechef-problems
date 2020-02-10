//
// Created by Vasu Goel on 2/10/20.
//

#include <bits/stdc++.h>
using namespace std;

typedef struct Point {
    int x, y;
    Point(int a, int b) {
        this->x = a, this->y = b;
    }
} point;

bool comparator(point a, point b) {
    return a.x < b.x || (a.x == b.x && a.y >= b.y);
}

double coordinate_distance(point a, point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n, x, y;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<point> coordinates;
        while(n--) {
            cin >> x >> y;
            coordinates.push_back(point(x, y));
        }
        sort(coordinates.begin(), coordinates.end(), &comparator);
        double distance = 0;
        for(int i = 0; i < coordinates.size() - 1; i++) {
            distance += coordinate_distance(coordinates[i], coordinates[i+1]);
        }
        cout << std::fixed << std::setprecision( 2 ) << distance << '\n';
    }
    return 0;
}