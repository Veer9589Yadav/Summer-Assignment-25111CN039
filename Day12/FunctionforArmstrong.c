#include <stdio.h>

int Armstrong(int num){
    int temp, rem, sum= 0;
    temp= num;
    while(temp!= 0){
        rem= temp%10;
        sum= sum +(rem*rem*rem);
        temp= temp/10;
    }
    if(sum== num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(Armstrong(num)){
        printf("%d is an Armstrong number.\n", num);
    }
    else{
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}