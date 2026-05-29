#include <stdio.h>
int main(){
    int num,digit,sum=0;

    printf ("Enter the Number: ");
    scanf("%d",&num);

    while(num != 0 ){
        digit = num % 10;
        sum += digit ;
        num /= 10 ;
    }

    printf("Sum = %d ",sum);
    return 0;
}