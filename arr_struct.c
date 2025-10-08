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
        scanf(" %[^\n]", s[i].name);
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

struct Student findHighest(struct Student s[], int n) {
    struct Student top = s[0];
    for(int i = 1; i < n; i++) {
        if(s[i].marks > top.marks)
            top = s[i];
    }
    return top;
}

float average(struct Student s[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i].marks;
    }
    return sum / n;
}

void aboveAverage(struct Student s[], int n, float avg) {
    printf("\nStudents scoring above average (%.2f):\n", avg);
    printf("---------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("---------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        if(s[i].marks > avg)
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

    struct Student top = findHighest(s, n);
    float avg = average(s, n);

    printf("\nHighest Scorer:\n");
    printf("---------------------------------------------\n");
    printf("Roll No.: %d\nName: %s\nMarks: %.2f\n", top.roll, top.name, top.marks);
    printf("---------------------------------------------\n");

    printf("\nAverage Marks of Class: %.2f\n", avg);

    aboveAverage(s, n, avg);

    return 0;
}
