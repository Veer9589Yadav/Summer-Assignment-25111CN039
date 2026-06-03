#include <stdio.h>
int Sumdigits(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n % 10) + Sumdigits(n / 10);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Sum of Digits = %d",Sumdigits(num));
    return 0;
}