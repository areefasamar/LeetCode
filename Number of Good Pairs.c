#include <stdio.h>

int numIdenticalPairs(int* nums, int numsSize){
    int freq[101] = {0};
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        count += freq[nums[i]];
        freq[nums[i]]++;
    }

    return count;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = numIdenticalPairs(nums, n);
    printf("Number of good pairs = %d\n", result);

    return 0;
}
