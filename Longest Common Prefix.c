#include <string.h>
#include <stdlib.h>

/**
 * Note: The returned string must be malloc'ed, assume caller calls free().
 */
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Find the length of the shortest string
    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) minLen = len;
    }

    // Allocate memory for the prefix (minLen + 1 for '\0')
    char *prefix = (char *)malloc((minLen + 1) * sizeof(char));
    if (!prefix) return ""; // allocation failed

    int idx = 0;
    for (int i = 0; i < minLen; i++) {
        char c = strs[0][i];
        // check this character in all strings
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c) {
                prefix[idx] = '\0';
                return prefix;
            }
        }
        prefix[idx++] = c;
    }

    prefix[idx] = '\0';
    return prefix;
}
