//
// Created by Vasu Goel on 1/17/20.
//

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

double max(double a, double b, double c) {
    if(a > b && a > c)  return a;
    else if(b > a && b > c)  return b;
    else return c;
}

bool double_equals(double a, double b, double epsilon = 0.001) {
    return std::abs(a - b) < epsilon;
}

bool check_right_triangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    double b = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    double c = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    return double_equals((pow(max(a, b, c), 2)),(pow(a, 2) + pow(b, 2) + pow(c, 2) - pow(max(a, b, c), 2)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1, y1, x2, y2, x3, y3;
    long long n, count = 0;
    cin >> n;
    while(n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if(check_right_triangle(x1, y1, x2, y2, x3, y3))  count++;
    }
    cout << count << '\n';
    return 0;
}

