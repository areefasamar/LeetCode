#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, r, c;

    printf("Enter rows and columns of original matrix (m n): ");
    scanf("%d %d", &m, &n);

    int mat[m][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Enter desired new dimensions (r c): ");
    scanf("%d %d", &r, &c);

    // Check if reshape is possible
    if (m * n != r * c) {
        printf("Reshape not possible. Output original matrix:\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                printf("%d ", mat[i][j]);
            printf("\n");
        }
        return 0;
    }

    // Print reshaped matrix
    printf("Reshaped matrix:\n");
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[count / n][count % n]);
            count++;
        }
        printf("\n");
    }

    return 0;
}
