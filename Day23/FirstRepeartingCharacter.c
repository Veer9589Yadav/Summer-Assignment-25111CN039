#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int visited[256]= {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i= 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]]){
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
        visited[(unsigned char)str[i]] = 1;
    }
    printf("No repeating character found.\n");
    return 0;
}