#include <stdio.h>

int palindrome(int n){
    int original, reverse = 0, rem;
    original= n;
    while(n!= 0){
        rem= n%10;
        reverse= reverse*10 + rem;
        n= n/10;
    }
    if(original == reverse){
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
    if(palindrome(num)){
        printf("%d is a Palindrome Number.\n", num);
    }
    else{
        printf("%d is not a Palindrome Number.\n", num);
    }
    return 0;
}