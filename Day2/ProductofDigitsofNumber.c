#include <stdio.h>
int main(){
    int num, digit, product=1;

    printf ("Enter the Number: ");
    scanf ("%d",&num);

    while (num != 0){
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf ("The product of digits of entered Number =%d",product);
    return 0;
}