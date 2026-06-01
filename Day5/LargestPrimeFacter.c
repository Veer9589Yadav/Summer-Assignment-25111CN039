#include<stdio.h>
int main(){
    int num, i, lpf;

    printf("Enter tne Number: ");
    scanf("%d",&num);

    for(i=2; i<=num; i++){
        while(num%i == 0){
            lpf = i;
            num /= i;
        }
    }
    printf("Largest Prime Facter: %d",lpf);
    return 0;
}