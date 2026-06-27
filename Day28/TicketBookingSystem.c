#include <stdio.h>
#include <string.h>

#define TOTAL_SEATS 50

struct Ticket {
    int ticketNo;
    char name[50];
    int seatNo;
};

struct Ticket t;
int availableSeats = TOTAL_SEATS;
int booked = 0;

int main() {
    int choice;

    while (1) {
        printf("\n========== Ticket Booking System ==========\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. View Booking Details\n");
        printf("4. Check Available Seats\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            if (booked) {
                printf("A ticket is already booked!\n");
            } else if (availableSeats == 0) {
                printf("No seats available!\n");
            } else {
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Seat Number: ");
                scanf("%d", &t.seatNo);

                booked = 1;
                availableSeats--;

                printf("Ticket booked successfully!\n");
            }
            break;

        case 2:
            if (!booked) {
                printf("No ticket booked!\n");
            } else {
                booked = 0;
                availableSeats++;
                printf("Ticket cancelled successfully!\n");
            }
            break;

        case 3:
            if (!booked) {
                printf("No booking found!\n");
            } else {
                printf("\n------ Booking Details ------\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seat Number   : %d\n", t.seatNo);
            }
            break;

        case 4:
            printf("Available Seats: %d\n", availableSeats);
            break;

        case 5:
            printf("Thank you for using the Ticket Booking System.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}