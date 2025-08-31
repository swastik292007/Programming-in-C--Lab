/*Write a program that prompts the user to input an integer n and returns the sum of the squares of
 even numbers between 2 and n (inclusive).*/
#include <stdio.h>

int main()  {
    int n,i,sum;
    printf("ENTER THE NUMBER: \n");
    scanf("%d",&n);
    sum=0;
    
    for(int i=2;i<=n ;i++)  {
        if(i%2==0) {
            sum+=(i*i);
        }
    }
    printf("sum = %d \n",sum);
    return 0;

}