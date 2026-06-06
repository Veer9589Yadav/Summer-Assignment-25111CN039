#include <stdio.h>
int main(){
    int n;

    printf("Enter the Number of Rows: ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        int X=0;
        for (int k=1; k<=i; k++){
            printf("%c",'A'+X);
                    X++;
        }
        int row= i-1;
        for (int k=1; k<=i-1; k++){
            printf("%c",'A'+row-1);
                    row--;
        }
        printf("\n");
    }
    return 0;
}