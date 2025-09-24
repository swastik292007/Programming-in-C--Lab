/*A square matrix of size n×n is called a magic square if the sum of everyrow , everycolumn, and both
 diagonals are equal.
 Write a C program to check whether a given matrix is a magic square or not.*/
 #include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    // Calculate the sum of the first row to use as reference
    int first_row = 0;
    for (int j = 0; j < n; j++)
        first_row += matrix[0][j];

    int isMagic = 1;

    // Check row sums
    for (int i = 1; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
            row_sum += matrix[i][j];
        if (row_sum != first_row) {
            isMagic = 0;
            break;
        }
    }

    // Check column sums
    if (isMagic) {
        for (int j = 0; j < n; j++) {
            int col_sum = 0;
            for (int i = 0; i < n; i++)
                col_sum += matrix[i][j];
            if (col_sum != first_row) {
                isMagic = 0;
                break;
            }
        }
    }

    // Check main diagonal
    if (isMagic) {
        int diag1_sum = 0;
        for (int i = 0; i < n; i++)
            diag1_sum += matrix[i][i];
        if (diag1_sum != first_row)
            isMagic = 0;
    }

    // Check secondary diagonal
    if (isMagic) {
        int diag2_sum = 0;
        for (int i = 0; i < n; i++)
            diag2_sum += matrix[i][n - i - 1];
        if (diag2_sum != first_row)
            isMagic = 0;
    }

    if (isMagic)
        printf("The matrix is a Magic Square.\n");
    else
        printf("The matrix is NOT a Magic Square.\n");

    return 0;
}



