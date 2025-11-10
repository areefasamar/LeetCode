#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0) return 0;

    int i = 0;
    for(int j = 1; j < numsSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    int nums[100], n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d sorted integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", k);
    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
