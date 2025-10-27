#include <stdio.h>
#include <string.h>

// Function to find longest common prefix
char* longestCommonPrefix(char strs[][50], int strsSize) {
    static char prefix[50];
    strcpy(prefix, strs[0]);  // Start with the first string

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0';  // Shorten the prefix
        if (j == 0) {
            return "";  // No common prefix
        }
    }
    return prefix;
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char strs[10][50];  // max 10 strings, each up to 49 chars
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
    }

    char* result = longestCommonPrefix(strs, n);
    if (strlen(result) == 0)
        printf("No common prefix.\n");
    else
        printf("Longest Common Prefix: %s\n", result);

    return 0;
}
