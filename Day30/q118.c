/* Q118 Write a program to Create mini library
system */

#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

typedef struct {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int available;
} Book;

Book books[MAX_BOOKS];
int book_count = 0;

// Function to add a book to the library
void addBook() {
    if (book_count < MAX_BOOKS) {
        printf("Enter book ID: ");
        scanf("%d", &books[book_count].id);
        printf("Enter book title: ");
        scanf("%s", books[book_count].title);
        printf("Enter book author: ");
        scanf("%s", books[book_count].author);
        books[book_count].available = 1;
        book_count++;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

// Function to display the library inventory
void displayBooks() {
    if (book_count == 0) {
        printf("No books in the library.\n");
    } else {
        printf("Library Inventory:\n");
        printf("ID\tTitle\t\t\tAuthor\t\t\tAvailable\n");
        for (int i = 0; i < book_count; i++) {
            printf("%d\t%s\t\t%s\t\t%d\n", books[i].id, books[i].title, books[i].author, books[i].available);
        }
    }
}

// Function to search for a book in the library
void searchBook() {
    int id;
    printf("Enter book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            printf("Book found: ID=%d, Title=%s, Author=%s, Available=%d\n", books[i].id, books[i].title, books[i].author, books[i].available);
            return;
        }
    }
    printf("Book not found in the library.\n");
}

// Function to delete a book from the library
void deleteBook() {
    int id;
    printf("Enter book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (books[i].id == id) {
            for (int j = i; j < book_count - 1; j++) {
                books[j] = books[j + 1];
            }
            book_count--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book not found in the library.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
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
                deleteBook();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}