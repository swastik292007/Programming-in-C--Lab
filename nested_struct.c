#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    float salary;
    struct Date join_date;
};

void accept(struct Employee e[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("Joining Date (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].join_date.day, &e[i].join_date.month, &e[i].join_date.year);
    }
}

void display(struct Employee e[], int n) {
    printf("\n-------------------------------------------------------------\n");
    printf("Name\t\tSalary\t\tJoining Date\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-15s%.2f\t\t%02d-%02d-%04d\n",
               e[i].name,
               e[i].salary,
               e[i].join_date.day,
               e[i].join_date.month,
               e[i].join_date.year);
    }
    printf("-------------------------------------------------------------\n");
}

void joinedAfter2020(struct Employee e[], int n) {
    int found = 0;
    printf("\nEmployees who joined after the year 2020:\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (e[i].join_date.year > 2020) {
            printf("%s\t(Joined: %02d-%02d-%04d)\n",
                   e[i].name,
                   e[i].join_date.day,
                   e[i].join_date.month,
                   e[i].join_date.year);
            found = 1;
        }
    }
    if (!found)
        printf("No employee joined after 2020.\n");
    printf("-------------------------------------------------------------\n");
}

int main() {
    struct Employee e[100];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    accept(e, n);
    display(e, n);
    joinedAfter2020(e, n);

    return 0;
}
