#include <stdio.h>

int findMaxConsecutiveOnes(int nums[], int size) {
    int count = 0;       // current count of consecutive 1s
    int maxCount = 0;    // maximum count so far

    for (int i = 0; i < size; i++) {
        if (nums[i] == 1) {
            count++; // continue counting 1s
            if (count > maxCount) {
                maxCount = count; // update max if needed
            }
        } else {
            count = 0; // reset count when a 0 is found
        }
    }

    return maxCount;
}

int main() {
    int nums[] = {1, 1, 0, 1, 1, 1};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = findMaxConsecutiveOnes(nums, size);
    printf("Maximum consecutive ones = %d\n", result);

    return 0;
}
