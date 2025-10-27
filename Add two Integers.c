#include <stdio.h>
int sum(int num1, int num2) {
    return num1 + num2;
}
int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int result = sum(a, b); 
    printf("Sum is: %d\n", result);

    return 0;
}
