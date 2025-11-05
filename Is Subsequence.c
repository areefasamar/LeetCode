#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(char *s, char *t) {
    int i = 0, j = 0;

    while (s[i] != '\0' && t[j] != '\0') {
        if (s[i] == t[j])
            i++;
        j++;
    }

    return s[i] == '\0';
}

int main() {
    char s[100], t[100];

    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);

    if (isSubsequence(s, t))
        printf("\"%s\" is a subsequence of \"%s\".\n", s, t);
    else
        printf("\"%s\" is NOT a subsequence of \"%s\".\n", s, t);

    return 0;
}
