#include <stdio.h>
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                // Check for duplicates in result
                int duplicate = 0;
                for (int k = 0; k < *returnSize; k++) {
                    if (result[k] == nums1[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    result[*returnSize] = nums1[i];
                    (*returnSize)++;
                }
                break;
            }
        }
    }
    return result;
}

int main() {
    int nums1[] = {4, 9, 5};
    int nums2[] = {9, 4, 9, 8, 4};
    int returnSize;

    int* result = intersection(nums1, 3, nums2, 5, &returnSize);

    printf("Intersection: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
