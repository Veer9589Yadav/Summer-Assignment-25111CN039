#include <stdio.h>
int main(){
    int num1, num2, reverse=0, remander;

    printf ("Enter the Number: ");
    scanf("%d",&num1);
    num2 = num1;


    while ( num2 != 0){
        remander = num2 % 10;
        reverse = reverse * 10 + remander;
        num2 /= 10;
    }

    if(num1 == reverse){
        printf("The Entered Number is a Palindrome Number");
    }
    else{
        printf("The Entered Number is not a Palindrome Number");
    }
    return 0;
}