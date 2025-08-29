#include <stdio.h>

int main() { 
    int i,a,b,c;
    printf("enter .5 to stop. \n");
    while (i!=.5) {
        printf("Enter number: \n");
        scanf("%d",&i);
    }
    a=0;
    b=0;
    c=0;
    if(i>0)  {
        a+=i;
        printf("positive numbers= %d \n",a);
    }
    else if(i==0){
        b+=i;
        printf("total zeroes= %d \n",b);
    }
    else if(i<0) {
        c+=i;
        printf("negative numbers= %d \n,c");
    }
    return 0;
}