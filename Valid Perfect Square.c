#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num) {
    long long left = 1, right = num;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long sq = mid * mid;

        if (sq == num)
            return true;
        else if (sq < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
