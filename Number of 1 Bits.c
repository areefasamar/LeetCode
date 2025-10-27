#include <stdio.h>

int hammingWeight(unsigned int n) {
    int count = 0;
    while (n != 0) {
        count += n & 1;  // if the least significant bit is 1
        n >>= 1;         // shift bits to the right
    }
    return count;
}

int main() {
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u", &n);

    int result = hammingWeight(n);
    printf("Number of set bits in %u = %d\n", n, result);

    return 0;
}
