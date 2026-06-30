#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book books[50];
    int n, i, choice;

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of books: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &books[i].bookId);

                    printf("Enter Book Title: ");
                    scanf(" %[^\n]", books[i].title);

                    printf("Enter Author Name: ");
                    scanf(" %[^\n]", books[i].author);
                }
                break;

            case 2:
                printf("\n----- Library Books -----\n");
                printf("ID\tTitle\t\tAuthor\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\n",
                           books[i].bookId,
                           books[i].title,
                           books[i].author);
                }
                break;

            case 3:
                printf("Exiting Library System...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}