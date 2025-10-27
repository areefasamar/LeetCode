#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;  // negative numbers are not palindromes

    int original = x;
    long reversed = 0;  // use long to handle overflow safely

    while (x > 0) {
        int digit = x % 10;          // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        x /= 10;                     // remove last digit
    }

    return original == reversed;
}
