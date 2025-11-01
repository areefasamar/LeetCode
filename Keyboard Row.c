#include <stdio.h>
#include <string.h>
#include <ctype.h>

int getRow(char c) {
    c = tolower(c);
    if (strchr("qwertyuiop", c)) return 1;
    if (strchr("asdfghjkl", c)) return 2;
    if (strchr("zxcvbnm", c)) return 3;
    return 0;
}

int main() {
    char words[][20] = {"Hello", "Alaska", "Dad", "Peace"};
    int n = 4;

    printf("Words that can be typed using one keyboard row:\n");
    for (int i = 0; i < n; i++) {
        char *word = words[i];
        int row = getRow(word[0]);
        int valid = 1;

        for (int j = 1; word[j] != '\0'; j++) {
            if (getRow(word[j]) != row) {
                valid = 0;
                break;
            }
        }

        if (valid)
            printf("%s\n", word);
    }

    return 0;
}
