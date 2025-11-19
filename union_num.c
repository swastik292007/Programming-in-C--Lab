#include <stdio.h>
#include <string.h>

typedef enum { INT_TYPE, FLOAT_TYPE, STRING_TYPE } Datatype;

typedef struct{
    Datatype type;
    union {
        int i;
        float f;
        char str[20];
    } value;
} variant;

void printVariant(variant v) {
    switch (v.type) {
        case INT_TYPE:  printf("Integer: %d \n", v.value.i); break;
        case FLOAT_TYPE:  printf("FLOAT: %f \n", v.value.f); break;
        case STRING_TYPE:  printf("String: %-10s \n", v.value.str); break;
    }
}
int main(){
    //--------------INTEGER------------------
    variant v1;
    v1.type = INT_TYPE;
    v1.value.i = 3;

    //--------------float---------------------
    variant v2;
    v2.type = FLOAT_TYPE;
    v2.value.f = 3.14159235;

    //---------------string---------------------
    variant v3;
    v3.type = STRING_TYPE;
    strcpy(v3.value.str, "value of pi...!!!");
    
    printVariant(v1);
    printVariant(v2);
    printVariant(v3);

    return 0;
}