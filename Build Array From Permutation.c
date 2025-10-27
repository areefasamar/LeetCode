#include <stdio.h>

int main() {
    int nums[] = {0, 2, 1, 5, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int ans[n];
    int i;  // Declare i outside the loop

    for (i = 0; i < n; i++) {
        ans[i] = nums[nums[i]];
    }

    printf("New Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    printf("\n");
    return 0;
}
