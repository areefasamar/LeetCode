#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        int n = nums[i], digits = 0;
        while (n > 0) {
            n /= 10;
            digits++;
        }
        if (digits % 2 == 0) {
            count++;
        }
    }
    return count;
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

    int result = findNumbers(nums, n);
    printf("Number of elements with even digits: %d\n", result);

    return 0;
}
