#include <stdio.h>

struct Address{
    char city[50];
    char state[50];
    int pincode;
};

struct Student{
    char name[50];
    int roll;
    struct Address addr;
};

void accept(struct Student s[], int n) {
      for(int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("City: ");
        scanf(" %[^\n]", s[i].addr.city);
        printf("State: ");
        scanf(" %[^\n]", s[i].addr.state);
        printf("Pincode: ");
        scanf("%d", &s[i].addr.pincode);
    }
    
}

void display(struct Student s[], int n) {
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("%-15s %-10s %-15s %-15s %-10s\n", "Name", "Roll No", "City", "State", "Pincode");
    printf("----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-15s %-10d %-15s %-15s %-10d\n",
               s[i].name, s[i].roll, s[i].addr.city, s[i].addr.state, s[i].addr.pincode);
    }
    printf("----------------------------------------------------------------------------------------\n");
}

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of Students: ");
    scanf("%d", &n);

    accept(s, n);
    display(s, n);

    return 0;
}
