/* Counts and prints no. of positive and negative integers */
#include <stdio.h>
int main() {
    int i, countpositive = 0, countnegative = 0;

    int elements[10] = {3, -4, -6, 9, 0, 7, 2, 10, -2, -1};

    for (i = 0; i < 10; i++) {
        if (elements[i] >= 0) {
            countpositive++;
        } 
        else {
            countnegative++;
        }
    }

    printf("Number of positive integers = %d\n", countpositive);
    printf("Number of negative integers = %d\n", countnegative);

    return 0;
}
