#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 5, 6};
    int n= 6;  // Numbers should be from 1 to 6

    int total_sum = n*(n + 1)/2;
    int array_sum= 0;
    for (int i= 0; i< n - 1; i++) {
        array_sum += arr[i];
    }
    int missing = total_sum - array_sum;
    printf("Missing number = %d\n", missing);
    return 0;
}