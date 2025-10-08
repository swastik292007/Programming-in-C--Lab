#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void accept(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // accepts string with spaces
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void display(struct Student s[], int n) {
    printf("\n---------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("---------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t\t%-15s%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    printf("---------------------------------------------\n");
}

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    accept(s, n);
    display(s, n);

    return 0;
}
