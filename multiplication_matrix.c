/*Write a  program to multiply two matrices A and B , where  A is of size m×n and B is of size n×p.
 Display the resulting m×p matrix.*/
 #include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Enter dimensions of Matrix A (rows, columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter number of columns for Matrix B: ");
    scanf("%d", &p);

    int a[m][n], b[n][p], result[m][p];

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < p; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < m; ++i) {
        for (j = 0; j < p; ++j) {
            result[i][j] = 0; // Initialize element
            for (k = 0; k < n; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant Matrix C:\n");
    for (i = 0; i < m; ++i) {
        for (j = 0; j < p; ++j) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}