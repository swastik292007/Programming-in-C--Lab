/*Write a program checkdivisor.c that takes as input from the user 2 numbers, and checks if the smaller
 number is a divisor of the larger number. It should display the appropriate output message.*/
  #include <stdio.h>

int main() 
{
    int a,b,c;
    printf("enter 3 different integers :\n");
    scanf("%d%d%d",&a,&b,&c); 

    if(a<b && a<c)  {
        printf("%d is smallest. \n",a);
    }
    else if(b<a && b<c)  {
        printf("%d is smallest. \n",b);
    }
    else if(c<a && c<b)  {
        printf("%d is smallest. \n",c);
    }
    return 0;

}