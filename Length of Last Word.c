#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char *s) {
    int len = 0;
    int i = strlen(s) - 1;

    while (i >= 0 && s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    char s[200];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // allows spaces

    printf("Length of last word: %d\n", lengthOfLastWord(s));
    return 0;
}
