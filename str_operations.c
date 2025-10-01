/*Q4. String Operations using Functions Without using <string.h>, write functions to:
 • Find the length of a string.
 • Reverse a string.
 • Compare two strings for equality.
 Call these functions from main().*/
#include <stdio.h>


int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
//reverse
void stringReverse(char str[]) {
    int len = stringLength(str);
    int i = 0, j = len - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

// comparing
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // not equal
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0'); 
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Length
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    // Reverse
    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);

    stringReverse(str2);
    printf("Reversed second string: %s\n", str2);

    // Compare
    if (stringCompare(str1, str2))
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
