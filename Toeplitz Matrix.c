#include <stdio.h>
#include <stdbool.h>

bool isToeplitz(int matrix[][10], int m, int n) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (matrix[i][j] != matrix[i+1][j+1])
                return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[10][10];
    printf("Enter matrix elements:\n");

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    if (isToeplitz(matrix, m, n))
        printf("The matrix is Toeplitz.\n");
    else
        printf("The matrix is NOT Toeplitz.\n");

    return 0;
}
