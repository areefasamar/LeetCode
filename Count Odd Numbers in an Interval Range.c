#include <stdio.h>

int countOdds(int low, int high) {
    return ((high + 1) / 2) - (low / 2);
}

int main() {
    int low, high;
    printf("Enter low and high values: ");
    scanf("%d %d", &low, &high);

    int result = countOdds(low, high);
    printf("Count of odd numbers between %d and %d (inclusive) = %d\n", low, high, result);

    return 0;
}
