#include <stdio.h>

// Function to return number of steps to reduce num to zero
int numberOfSteps(int num) {
    int steps = 0;

    while (num > 0) {
        if (num % 2 == 0) {
            num = num / 2;   // if even, divide by 2
        } else {
            num = num - 1;   // if odd, subtract 1
        }
        steps++;              // count each step
    }

    return steps;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = numberOfSteps(n);
    printf("Number of steps to reduce %d to zero = %d\n", n, result);

    return 0;
}
