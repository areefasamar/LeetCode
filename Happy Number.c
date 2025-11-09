#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n){
    int *seen = (int *)malloc(sizeof(int) * 1000);
    int count = 0;

    while (n != 1) {
        bool repeated = false;
        for (int i = 0; i < count; i++) {
            if (seen[i] == n) {
                repeated = true;
                break;
            }
        }
        if (repeated) {
            free(seen);
            return false;
        }
        seen[count++] = n;
        n = sumOfSquares(n);
    }

    free(seen);
    return true;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isHappy(n))
        printf("%d is a happy number.\n", n);
    else
        printf("%d is NOT a happy number.\n", n);

    return 0;
}
