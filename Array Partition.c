#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0;

    for (int i = 0; i < numsSize; i += 2)
        sum += nums[i];

    return sum;
}

int main() {
    int nums[] = {6, 2, 6, 5, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Maximized sum = %d\n", arrayPairSum(nums, n));
    return 0;
}
