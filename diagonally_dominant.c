/*A square matrix 𝐴=[𝑎𝑖]A=[aij	​] is said to be diagonally dominant if, for every row 𝑖i:∣𝑎𝑖𝑖∣  ≥  ∑𝑗=𝑗≠𝑖𝑛∣𝑎𝑖𝑗∣∣aii	​∣≥j=1j=i	​∑n	​∣aij	​∣That is, the absolute value of each diagonal element must be greater than or equal to the sum of the absolute values of all the other (non-diagonal) elements in the same row.*/
#include <stdio.h>
#include <stdlib.h>   // abs() के लिए

int main() {
    int n,i,j,sum,ok=1,a[10][10];
    printf("enter order of matrix(n): ");
    scanf("%d",&n);

    printf("enter elements of matrix: ");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<n;j++){
            if(i!=j){
             sum+=abs(a[i][j]);
            }
        if(abs(a[i][i]) < sum) {
        ok=0;
        }
    }
    }

    printf(ok?"Diagonally Dominant\n":"Not Diagonally Dominant\n");
    return 0;
}
