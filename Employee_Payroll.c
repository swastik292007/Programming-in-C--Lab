
#include <stdio.h>

struct Employee {
    char id_name[50];
    char designation[50];
    float salary;
};

void accept(struct Employee s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n",i+ 1);
        printf("id_name: ");
        scanf("%s",s[i].id_name);
        printf("Designation: ");
        scanf(" %[^\n]", s[i].designation);
        printf("salary: ");
        scanf("%f", &s[i].salary);
    }
}
void display(struct Employee s[], int n) {
    printf("\n-------------------------------------------------------------\n");
    printf("id_name\t\tDesignation\t\tsalary\n");
    printf("\n-------------------------------------------------------------\n");
    for(int i=0;i<n;i++) {
        printf("%-15s\t%-15s\t\t%.2f\n",s[i].id_name,s[i].designation,s[i].salary);
    }
    printf("\n-------------------------------------------------------------\n");

}

int main() {
    struct Employee s[200];
    int n;

    printf("enter number of Employees: ");
    scanf("%d",&n);

    accept(s, n);
    display(s, n);

    return 0;
}