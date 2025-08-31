/* Write a program grade that takes as input from the user one of the letter grades ’AA’, ’AB’, ’BB’,
 ’BC’, ’CC’, ’CD’, ’DD’, ’FR’. Your program must be able to handle illegal input (for example, EE) and display an appropriate
 message ’Illegal grade’. Also you program must be able to handle lower case inputs. For example, ‘AA’
 or ‘aa’ should output ’Excellent’.*/
 #include<stdio.h>
 #include<string.h>
 int main() {
    char grade[3];
    printf("enter grade:\n");
    scanf("%s",&grade);

    int AA,aa,AB,ab,BB,BC,CC,CD,DD,FR,bb,bc,cc,cd,dd,fr;

    if(strcmp(grade,"AA")==0 || strcmp(grade,"aa")==0)  {
        printf("Excellent");
    }
    else if(strcmp(grade,"AB")==0 || strcmp(grade,"ab")==0) {
        printf("Very Good");
    }
    else if(strcmp(grade,"BB")==0 || strcmp(grade,"bb")==0) {
        printf("Good");
    }
    else if(strcmp(grade,"BC")==0 || strcmp(grade,"bc")==0) {
        printf("Average");
    }
    else if(strcmp(grade,"CC")==0 || strcmp(grade,"cc")==0) {
        printf("Satisfactory");
    }
    else if(strcmp(grade,"CD")==0 || strcmp(grade,"cd")==0) {
        printf("Pass");
    }
    else if(strcmp(grade,"DD")==0 || strcmp(grade,"dd")==0) {
        printf("Just Pass");
    }
    else if(strcmp(grade,"FR")==0 || strcmp(grade,"fr")==0) {
        printf("Fail");
    }
    else {
        printf("Illegal Grade");
    }
    return 0;
 }