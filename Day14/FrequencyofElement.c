#include <stdio.h>

int main(){
    int arr[100],n,element,i,count =0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i =0; i <n; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to find frequency: ");
    scanf("%d",&element);

    // Count frequency
    for(i =0; i <n; i++) {
        if(arr[i] ==element) {
            count++;
        }
    }
    printf("Frequency of %d = %d\n",element,count);
    return 0;
}