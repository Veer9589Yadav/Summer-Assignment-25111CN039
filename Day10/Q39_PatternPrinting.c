#include <stdio.h>
int main(){
    int n;

    printf("Enter the Numbers of Rows :");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for (int k=1; k<=i; k++){
            printf("%d",k);
        }
        int row=i-1; 
        for (int k=1; k<=i-1; k++){
            printf("%d",row);
            row--;
        }
        printf("\n");
    }
    return 0;
}