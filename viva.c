#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int maximum;
    int second_largest;
    
    if(b>a && b>c) {
        maximum=b;
        if(c>a){
            second_largest=c;
        }
        else{
            second_largest=a;
        }
    }
    else if(c>a && c>b) {
        maximum=c;
        if(b>a){
            second_largest=b;
        }
        else{
            second_largest=a;
        }
    }
    else {
        maximum=a;
        if(b>c){
            second_largest=b;
        }
        else{
            second_largest=c;
        }
    }


    printf("LARGEST NUMBER = %d \n",maximum);
    printf("SECOND LARGEST = %d \n",second_largest);
    return 0;
}