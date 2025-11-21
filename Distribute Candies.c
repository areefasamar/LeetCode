#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int distributeCandies(int* candyType, int candyTypeSize) {
    qsort(candyType, candyTypeSize, sizeof(int), cmp);

    int uniqueTypes = 1;
    for (int i = 1; i < candyTypeSize; i++) {
        if (candyType[i] != candyType[i - 1])
            uniqueTypes++;
    }

    int maxEat = candyTypeSize / 2;
    return (uniqueTypes < maxEat) ? uniqueTypes : maxEat;
}

int main() {
    int candyType[] = {1, 1, 2, 2, 3, 3};
    int n = sizeof(candyType) / sizeof(candyType[0]);

    printf("Max different candies Alice can eat: %d\n",
           distributeCandies(candyType, n));

    return 0;
}
