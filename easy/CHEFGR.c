//
// Created by Vasu Goel on 2/9/20.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, m;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        int heights[n], max_height = 0, difference = 0;
        for(int i = 0; i < n; i++)  {
            scanf("%d", &heights[i]);
            if(heights[i] > max_height)  max_height = heights[i];
        }
        for(int i = 0; i < n; i++)  difference += abs(heights[i] - max_height);
        if((m - difference) % n == 0)  printf("Yes\n");
        else  printf("No\n");
    }
    return 0;
}