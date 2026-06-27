#include <stdio.h>
#include <string.h>

#define MAX 100

struct Salary {
    int empId;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

struct Salary emp[MAX];
int count = 0;

// Add Salary Record
void addRecord() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    printf("Enter HRA: ");
    scanf("%f", &emp[count].hra);

    printf("Enter DA: ");
    scanf("%f", &emp[count].da);

    emp[count].grossSalary = emp[count].basicSalary + emp[count].hra + emp[count].da;

    count++;
    printf("Salary record added successfully!\n");
}

// Display Records
void displayRecords() {
    if (count == 0) {
        printf("\nNo salary records found!\n");
        return;
    }

    printf("\n------ Salary Records ------\n");
    for (int i = 0; i < count; i++) {
        printf("\nEmployee ID   : %d", emp[i].empId);
        printf("\nName          : %s", emp[i].name);
        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
        printf("\nHRA           : %.2f", emp[i].hra);
        printf("\nDA            : %.2f", emp[i].da);
        printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
    }
}

// Search Record
void searchRecord() {
    int id, found = 0;

    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {
            printf("\nRecord Found");
            printf("\nEmployee ID   : %d", emp[i].empId);
            printf("\nName          : %s", emp[i].name);
            printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee record not found!\n");
}

// Update Record
void updateRecord() {
    int id, found = 0;

    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {
            printf("Enter New Basic Salary: ");
            scanf("%f", &emp[i].basicSalary);

            printf("Enter New HRA: ");
            scanf("%f", &emp[i].hra);

            printf("Enter New DA: ");
            scanf("%f", &emp[i].da);

            emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

            printf("Salary record updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee record not found!\n");
}

// Delete Record
void deleteRecord() {
    int id, found = 0;

    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].empId == id) {
            for (int j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("Salary record deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Employee record not found!\n");
}

// Main Function
int main() {
    int choice;

    while (1) {
        printf("\n========== Salary Management System ==========\n");
        printf("1. Add Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Salary Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord();
                break;
            case 2:
                displayRecords();
                break;
            case 3:
                searchRecord();
                break;
            case 4:
                updateRecord();
                break;
            case 5:
                deleteRecord();
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}