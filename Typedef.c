#include <stdio.h>

typedef struct Employee {
    int id;
    char name[50];
    float salary;
} Emp;  

int main() {
    Emp e1, e2; 

    printf("Enter details for Employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);
    printf("Name: ");
    scanf(" %[^\n]", e1.name);
    printf("Salary: ");
    scanf("%f", &e1.salary);

    printf("\nEnter details for Employee 2:\n");
    printf("ID: ");
    scanf("%d", &e2.id);
    printf("Name: ");
    scanf(" %[^\n]", e2.name);
    printf("Salary: ");
    scanf("%f", &e2.salary);

    printf("\n--- Employee Details ---\n");
    printf("Employee 1: ID=%d, Name=%s, Salary=%.2f\n", e1.id, e1.name, e1.salary);
    printf("Employee 2: ID=%d, Name=%s, Salary=%.2f\n", e2.id, e2.name, e2.salary);

    return 0;
}
