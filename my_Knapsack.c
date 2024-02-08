#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_mat.h"
#include <string.h>

#define W 20
#define maxItems 5

int main() {
    int result[maxItems] = {0};
    char items[maxItems][20]; // Assuming each item name has at most 49 characters
    int values[maxItems] = {0};
    int weights[maxItems] = {0};

    for (int i = 0; i < maxItems; i++) {
        scanf("%s", items[i]);
        scanf("%d", &values[i]);
        scanf("%d", &weights[i]);
    }

    int ans = Knapsack(weights, values, result);

    printf("Maximum profit: %d\n", ans);

    printf("Selected items:");
    for (int i = 0; i < maxItems; i++) {
        if (result[i] == 1) {
            printf(" %s", items[i]);
        }
    }
    
    return 0;
}
