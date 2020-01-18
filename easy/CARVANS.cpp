//
// Created by Vasu Goel on 1/15/20.
//

#include <stdio.h>
using namespace std;

int main()
{
    int t, n, s, prev, next;
    scanf("%d", &t);
    while(t > 0) {
        int count = 1;
        scanf("%d", &n);
        scanf("%d", &prev);
        for(int i = 0; i < n-1; i++) {
            scanf("%d", &next);
            if(next < prev) {
                count++;
                prev = next;
            }
        }
        printf("%d\n", count);
        t--;
    }
    return 0;
}


