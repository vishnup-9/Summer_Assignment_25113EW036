/* Q111 Write a program to Create ticket booking
system. */

#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
    int booked;
};

struct Ticket t;

// Book Ticket
void bookTicket() {
    printf("\nEnter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    t.booked = 1;

    printf("Ticket Booked Successfully!\n");
}

// Cancel Ticket
void cancelTicket() {
    if (t.booked) {
        t.booked = 0;
        printf("Ticket Cancelled Successfully!\n");
    } else {
        printf("No Ticket Booked!\n");
    }
}

// Display Ticket Details
void displayTicket() {
    if (t.booked) {
        printf("\n----- Ticket Details -----\n");
        printf("Ticket Number  : %d\n", t.ticketNo);
        printf("Passenger Name : %s\n", t.name);
        printf("Seats Booked   : %d\n", t.seats);
        printf("Status         : Booked\n");
    } else {
        printf("\nNo Ticket Booked!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Ticket Details\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bookTicket();
                break;
            case 2:
                cancelTicket();
                break;
            case 3:
                displayTicket();
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