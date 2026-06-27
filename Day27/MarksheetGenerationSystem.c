#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5, total, percentage;
    char grade;

    printf("========== Marksheet Generation System ==========\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    printf("Enter Marks of Subject 4: ");
    scanf("%f", &m4);

    printf("Enter Marks of Subject 5: ");
    scanf("%f", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\n========== Student Marksheet ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);
    printf("Subject 1    : %.2f\n", m1);
    printf("Subject 2    : %.2f\n", m2);
    printf("Subject 3    : %.2f\n", m3);
    printf("Subject 4    : %.2f\n", m4);
    printf("Subject 5    : %.2f\n", m5);
    printf("Total Marks  : %.2f / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if (percentage >= 40)
        printf("Result       : PASS\n");
    else
        printf("Result       : FAIL\n");

    return 0;
}