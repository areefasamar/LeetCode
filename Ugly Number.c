#include <stdio.h>
#include <stdbool.h>

bool isUgly(int n) {
    if (n <= 0) return false;

    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    return n == 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isUgly(n))
        printf("%d is an ugly number.\n", n);
    else
        printf("%d is NOT an ugly number.\n", n);

    return 0;
}
