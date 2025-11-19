#include <stdio.h>

int main(){
        int n=11,i,j;
        int mid = (n/2);

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (i == j || i+j == n+1) {
                    printf("*");
                }
                else printf(" ");
            }
        printf("\n");
        }
    return 0;
}