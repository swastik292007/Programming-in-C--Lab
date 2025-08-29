//WAP in C that takes five integers from the user and print their average.
#include <stdio.h>
int main() {
    int a,b,c,d,e;

    printf("enter 5 integers:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    float average = (a+b+c+d+e)/5;
    printf("average= %.2f",average);

    return 0;

}