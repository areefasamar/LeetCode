#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool wordPattern(char *pattern, char *s) {
    char *words[300]; // increased to prevent overflow
    int count = 0;

    // Split string s into words
    char *token = strtok(s, " ");
    while (token != NULL && count < 300) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    if ((int)strlen(pattern) != count)
        return false;

    char *map[26] = {NULL};
    char *used[300];
    int used_count = 0;

    for (int i = 0; i < count; i++) {
        int idx = pattern[i] - 'a';

        if (map[idx] == NULL) {
            // Check if this word is already mapped
            for (int j = 0; j < used_count; j++) {
                if (strcmp(used[j], words[i]) == 0)
                    return false;
            }
            map[idx] = words[i];
            used[used_count++] = words[i];
        } else {
            if (strcmp(map[idx], words[i]) != 0)
                return false;
        }
    }
    return true;
}

int main() {
    char pattern[] = "abba";
    char s[] = "dog cat cat dog";

    if (wordPattern(pattern, s))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
