#include <stdio.h>

int maximum(int i, int j){
    if (i > j){
        return i;
    }
    else{
        return j;
    }
}
int main(){
    int n1, n2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    max = maximum(n1, n2);
    printf("Maximum number = %d\n", max);
    return 0;
}