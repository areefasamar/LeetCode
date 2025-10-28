#include <stdio.h>

int getSum(int a, int b) {
    while (b != 0) {
        unsigned carry = (unsigned)(a & b) << 1;  // calculate carry
        a = a ^ b;  // add without carry
        b = carry;  // carry for next iteration
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int result = getSum(a, b);
    printf("Sum (without using + or -) = %d\n", result);

    return 0;
}
