#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, originalNum, remainder, digits, result;

    printf("Enter start range: ");
    scanf("%d", &start);

    printf("Enter end range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}