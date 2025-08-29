/* WAP in C that takes input length and width from the user.
 For each of the following expressions, determine the output value and the data type of the result.
 • length / 3
 • width / 2
 • length / 3.0
 • length / width
 • (width + length) / length > length / widt*/
#include <stdio.h>
int main() {
    int l,b;
    printf("enter length and width: \n");
    scanf("%d%d",&l,&b);
     
    printf("length/3 = %d \t (integer type)\n",(l/3));
    printf("width/2= %d \t (integer type)\n",(b/2));
    printf("length/3.0= %.2f \t (float type)\n",(l/3.0));
    printf("length/width= %d \t (integer type)\n",(l/b));
    printf("(width+length)/length > length/width=%d \t (boolean/int type)\n",(b + l) / l > l / b);
    return 0; 
}
    
    




