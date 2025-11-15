#include <stdio.h>
#include <stdlib.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            result[*returnSize] = abs(nums[i]);
            (*returnSize)++;
        } else {
            nums[index] *= -1;
        }
    }

    return result;
}

int main() {
    int nums[] = {4,3,2,7,8,2,3,1};
    int size = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* duplicates = findDuplicates(nums, size, &returnSize);

    printf("Duplicates: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", duplicates[i]);
    }
    printf("\n");

    free(duplicates);
    return 0;
}
