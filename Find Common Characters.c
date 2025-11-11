#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[100][100];
    printf("Enter %d words:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%s", words[i]);

    int freq[26];
    for(int i = 0; i < 26; i++)
        freq[i] = 100000;

    for(int w = 0; w < n; w++){
        int temp[26] = {0};
        for(int i = 0; words[w][i] != '\0'; i++)
            temp[words[w][i] - 'a']++;

        for(int i = 0; i < 26; i++)
            if(temp[i] < freq[i])
                freq[i] = temp[i];
    }

    printf("Common characters: ");
    for(int i = 0; i < 26; i++){
        while(freq[i] > 0){
            printf("%c ", i + 'a');
            freq[i]--;
        }
    }
    printf("\n");
    return 0;
}
