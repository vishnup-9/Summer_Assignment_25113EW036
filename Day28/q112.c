/* Q112 Write a program to Create contact
management system. */

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

struct Contact c;

// Add Contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("Enter Email: ");
    scanf("%s", c.email);

    printf("Contact Added Successfully!\n");
}

// Display Contact
void displayContact() {
    printf("\n----- Contact Details -----\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);
    printf("Email : %s\n", c.email);
}

// Search Contact
void searchContact() {
    char searchName[50];

    printf("\nEnter Name to Search: ");
    scanf(" %[^\n]", searchName);

    if (strcmp(searchName, c.name) == 0) {
        printf("\nContact Found!\n");
        displayContact();
    } else {
        printf("Contact Not Found!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContact();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}