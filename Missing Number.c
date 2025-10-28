#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return total - sum;
}

int main() {
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Missing number is: %d\n", missingNumber(nums, n));
    return 0;
}
