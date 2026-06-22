#include <stdio.h>

int main(){
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    printf("Common characters: ");
    for(int i= 0; str1[i] !='\0'; i++){
        int found =0;
        for(int j= 0; str2[j] != '\0'; j++){
            if(str1[i] == str2[j]){
                found =1;
                break;
            }
        }
        // Avoid printing duplicates
        int duplicate =0;
        for(int k= 0; k< i; k++){
            if(str1[k] == str1[i]){
                duplicate = 1;
                break;
            }
        }
        if(found && !duplicate){
            printf("%c ",str1[i]);
        }
    }
    return 0;
}