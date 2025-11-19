#include <stdio.h>

int main(){
        int n=11,i,j;
        int mid = (n/2);

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == mid/2 || j == mid) {
                    printf("*");
                }
                else printf(" ");
            }
        printf("\n");
        }
    return 0;
}