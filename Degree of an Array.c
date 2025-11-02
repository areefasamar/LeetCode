#include <stdio.h>

#define MAX_NUM 50000

int findShortestSubArray(int* nums, int numsSize) {
    int freq[MAX_NUM] = {0};
    int first[MAX_NUM];
    int last[MAX_NUM];
    for (int i = 0; i < MAX_NUM; i++) first[i] = -1;

    int degree = 0;

    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if (first[n] == -1)
            first[n] = i;
        last[n] = i;
        freq[n]++;
        if (freq[n] > degree)
            degree = freq[n];
    }

    int minLen = numsSize;

    for (int i = 0; i < MAX_NUM; i++) {
        if (freq[i] == degree) {
            int len = last[i] - first[i] + 1;
            if (len < minLen)
                minLen = len;
        }
    }

    return minLen;
}

int main() {
    int nums[] = {1, 2, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Smallest subarray length with same degree: %d\n", findShortestSubArray(nums, n));
    return 0;
}
