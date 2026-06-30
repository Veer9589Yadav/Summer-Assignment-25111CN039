#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student records
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }

    return 0;
}