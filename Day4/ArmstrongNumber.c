#include <stdio.h>
#include <math.h>
int main(){
    int num, onum, remainder, digits=0, result=0;

    printf("Enetr a number: ");
    scanf("%d",&num);

    onum = num ;

    while(onum != 0){
        onum /= 10 ;
        digits++ ;
    }

    onum = num ;

    while(onum != 0){
        remainder = onum % 10 ;
        result += pow(remainder,digits);
        onum /= 10;
    }

    if(result == num){
        printf("%d is a Armstrong Number.",num);
    }
    else{
        printf("%d is Not a Armstrong Number.",num);
    }
    return 0;
}