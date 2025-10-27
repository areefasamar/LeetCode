#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x){
     if (x < 0) return false;
     long reversed = 0;
     int original = x;
  
     while (x > 0) {
    reversed = reversed * 10 + (x % 10);
    x = x / 10;
}

    return original == reversed;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
