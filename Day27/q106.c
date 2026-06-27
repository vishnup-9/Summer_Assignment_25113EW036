/* Q106 Write a program to Create employee
management system. */

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee {
        char name[50];
        int age;
        float salary;
    };

    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    for (i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    free(employees);
    return 0;
}