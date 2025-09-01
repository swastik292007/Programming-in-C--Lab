#include <stdio.h>

int main() {
    int i, j,n;
    printf("enter number: \n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        printf("%d table: ", i);
        for (j = 1; j <= 10; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}
