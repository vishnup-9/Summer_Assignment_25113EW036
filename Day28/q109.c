/* Q109 Write a program to Create library
management system. */

#include <stdio.h>
#include <string.h>

struct Library {
    int id;
    char name[50];
    char author[50];
    int issued;
};

struct Library book[100];
int n = 0;

// Add Book
void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &book[n].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", book[n].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[n].author);

    book[n].issued = 0;
    n++;

    printf("Book Added Successfully!\n");
}

// Display Books
void displayBooks() {
    int i;

    if (n == 0) {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\n--- Library Books ---\n");
    printf("ID\tBook Name\tAuthor\t\tStatus\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%s\n",
               book[i].id,
               book[i].name,
               book[i].author,
               book[i].issued ? "Issued" : "Available");
    }
}

// Search Book
void searchBook() {
    int id, i, found = 0;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++) {
        if (book[i].id == id) {
            printf("\nBook Found!\n");
            printf("Book Name : %s\n", book[i].name);
            printf("Author    : %s\n", book[i].author);
            printf("Status    : %s\n",
                   book[i].issued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book Not Found!\n");
}

// Issue Book
void issueBook() {
    int id, i;

    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++) {
        if (book[i].id == id) {
            if (book[i].issued)
                printf("Book Already Issued!\n");
            else {
                book[i].issued = 1;
                printf("Book Issued Successfully!\n");
            }
            return;
        }
    }

    printf("Book Not Found!\n");
}

// Main Function
int main() {
    int choice;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}