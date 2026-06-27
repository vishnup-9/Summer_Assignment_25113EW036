/* Q107 Write a program to Create salary management
system. */

#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}