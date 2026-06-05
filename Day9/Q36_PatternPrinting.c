#include <stdio.h>
int main(){
    int n;

    printf("Enter the Number of Rows/Column : ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            //Part 1
            if( i==1 || i==n ){
                printf("*");
            }
            //Part 2
            else{
                if( j==1 || j==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}