#include <stdio.h>
#include <string.h>

#define MAX 100

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact contact[MAX];
int count = 0;

// Add Contact
void addContact() {
    printf("\nEnter Name: ");
    scanf(" %[^\n]", contact[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contact[count].phone);

    count++;
    printf("Contact added successfully!\n");
}

// Display Contacts
void displayContacts() {
    if (count == 0) {
        printf("\nNo contacts found!\n");
        return;
    }

    printf("\n------ Contact List ------\n");
    for (int i = 0; i < count; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name  : %s\n", contact[i].name);
        printf("Phone : %s\n", contact[i].phone);
    }
}

// Search Contact
void searchContact() {
    char name[50];
    int found = 0;

    printf("\nEnter Name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].name, name) == 0) {
            printf("\nContact Found\n");
            printf("Name  : %s\n", contact[i].name);
            printf("Phone : %s\n", contact[i].phone);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

// Delete Contact
void deleteContact() {
    char name[50];
    int found = 0;

    printf("\nEnter Name to delete: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(contact[i].name, name) == 0) {
            for (int j = i; j < count - 1; j++) {
                contact[j] = contact[j + 1];
            }
            count--;
            printf("Contact deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Contact not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n========== Contact Management System ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}