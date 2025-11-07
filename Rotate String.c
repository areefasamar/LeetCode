#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool rotateString(char *s, char *goal) {
    int len1 = strlen(s);
    int len2 = strlen(goal);

    if (len1 != len2)
        return false;

    char temp[2 * len1 + 1];
    strcpy(temp, s);
    strcat(temp, s);

    return strstr(temp, goal) != NULL;
}

int main() {
    char s[100], goal[100];

    printf("Enter string s: ");
    scanf("%s", s);

    printf("Enter string goal: ");
    scanf("%s", goal);

    if (rotateString(s, goal))
        printf("True — s can be rotated to form goal.\n");
    else
        printf("False — s cannot be rotated to form goal.\n");

    return 0;
}
