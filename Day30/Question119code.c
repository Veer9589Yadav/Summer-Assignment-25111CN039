#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[50];
    int n = 0, i, choice;

    while (1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter number of employees: ");
                scanf("%d", &n);

                for (i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);

                    printf("Enter Employee ID: ");
                    scanf("%d", &emp[i].empId);

                    printf("Enter Employee Name: ");
                    scanf(" %[^\n]", emp[i].name);

                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }
                break;

            case 2:
                if (n == 0) {
                    printf("No employee records found!\n");
                } else {
                    printf("\n----- Employee Records -----\n");
                    printf("ID\tName\t\tSalary\n");

                    for (i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%.2f\n",
                               emp[i].empId,
                               emp[i].name,
                               emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Exiting Employee Management System...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}