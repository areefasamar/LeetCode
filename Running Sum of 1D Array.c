#include <stdio.h>
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    result[0] = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        result[i] = result[i - 1] + nums[i];
    }
    
    *returnSize = numsSize;
    return result;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int* result = runningSum(nums, n, &returnSize);

    printf("Running sum: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
