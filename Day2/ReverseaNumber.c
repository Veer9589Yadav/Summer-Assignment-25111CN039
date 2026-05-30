#include <stdio.h>
int main(){
    int num, reverse=0, remander;

    printf ("Enter the Number: ");
    scanf ("%d",&num);

    while(num != 0){
        remander = num % 10;
        reverse = reverse * 10 + remander;
        num /= 10;
    }

    printf ("Reverse of Enter Number = %d",reverse);
    return 0;
}