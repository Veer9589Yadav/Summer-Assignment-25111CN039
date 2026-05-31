#include <stdio.h>
int main(){
    int first=0, second=1, next, n, i;

    printf("Enter the Number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");

    for(i=1; i<=n; i++){
        printf("%d ",first);
        next = first + second ;
        first = second ;
        second = next ;
    }
    return 0;
}