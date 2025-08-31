/*Write a program named istriangle.c that prompts the user to input three stick lengths, and then prints
 either “Yes. Triangle possible” or “No” depending on whether you can or cannot form a triangle from
 sticks with the given lengths*/
#include <stdio.h>

int main()  
    {
        int a,b,c;
        printf("enter sides of triangle: \n");
        scanf("%d%d%d",&a,&b,&c );
        
        if (a<=0 || b<=0 || c<=0) {
            printf("triangle not possible with negative integers. \n");
        }
        else if (a+b>c && a+c>b && b+c>a)
        {
             printf("triangle is possible. \n");
        }    
        else  {
            printf("triangle not possible. \n");
        }

        getchar();
        return 0;
    }