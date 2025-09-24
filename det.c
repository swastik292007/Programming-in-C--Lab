/*C program that computes the determinant of a square matrix (with 𝑛≤3n≤3):*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix (1-3): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    int det=0;

    if(n==1) {
        det = (matrix[0][0]);
    }
    else if(n==2) {
        det = (matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0]);
    }
    else {
        det= (matrix[0][0]*(matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])) - (matrix[0][1]*(matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])) + (matrix[0][2]*(matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]));
    }

    printf("det = %d \n",det);

    return 0;
}