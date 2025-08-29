/* WAP in C to solve the quadratic equation:
 2x2 −4x−3 =0
 using the quadratic formula:
 x = (−b±√b^2 −4ac)/2a     */
#include<stdio.h>
#include <math.h>
int main() {
    int a,b,c,root1,root2,imgroot,realroot;
    printf("enter coefficients of quadratic:\n");
    scanf("%d%d%d",&a,&b,&c);
    int d=(b*b)-(4*a*c);
    if(d>0) {
        root1=-b+sqrt(d)/2*a;
        root2=-b-sqrt(d)/2*a;
        printf("real and distinct roots:%d,%d\n",root1,root2);
    }
    else if(d=0) {
        root1=-b/2*a;
        printf("real and equal roots:\n",root1,root1);
    }
    else if(d<0) {
        realroot=-b+sqrt(d)/2*a;
        imgroot=-b-sqrt(d)/2*a;
        printf("real and imaginary root:\n",realroot,imgroot);
    }
    else {
        printf("data insufficient.\n");
    }
    return 0;
}