#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_mat.h"
#include <string.h>

#define W 20
#define maxItems 5

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } // Clear the input buffer
}

int main() {
    int result[maxItems] = {0};
    char items[maxItems][20]; // Assuming each item name has at most 49 characters
    int values[maxItems] = {0};
    int weights[maxItems] = {0};

    for (int i = 0; i < maxItems; i++) {
        printf("Enter item %d name: ", i + 1);
        scanf("%s", items[i]);
        clearInputBuffer();

        printf("Enter value for %s: ", items[i]);
        scanf("%d", &values[i]);
        clearInputBuffer();

        printf("Enter weight for %s: ", items[i]);
        scanf("%d", &weights[i]);
        clearInputBuffer();
    }

    int ans = Knapsack(weights, values, result);

    printf("Maximum profit: %d\n", ans);

    printf("Selected items: ");
    for (int i = 0; i < maxItems; i++) {
        if (result[i] == 1) {
            printf("%s ", items[i]);
        }
    }
    printf("\n");

    return 0;
}
