#include <stdio.h>

struct Address{
    char city[50];
    char state[50];
    int pincode;
};

struct Student{
    char name[50];
    int roll_no;
    struct Address addr;
};

void accept(struct Student s[], int n) {
     for(int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n",i+ 1);
        printf("name: ");
        scanf("%s",s[i].name);
        printf("roll_no: ");
        scanf(" %d", s[i].roll_no);
        printf("Address:");
        scanf("%s %s %d",s[i].addr.city,s[i].addr.state,s[i].addr.pincode);
    }
}

void display(struct Student s[], int n) {
    printf("\n----------------------------------------------------------------------------------------\n");
    printf("name\t\troll_no\t\tAddress\n");
    printf("\n----------------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++) {
        printf("%-15s\t%d\t%-15s %-15s %d\n",s[i].name,s[i].roll_no,s[i].addr.city,s[i].addr.state,s[i].addr.pincode);
    }
    printf("\n----------------------------------------------------------------------------------------\n");
}