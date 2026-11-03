#include <stdio.h>
#include <string.h>
int check_number(char str[49]){
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>='0' && str[i]<='9') return 0;
        if (str[i]=='@' || str[i]=='!' || str[i]=='#') return 0;
        }
        return 1;
}

int main() {
    int num;
    char arr[20][49];
    printf("Enter number of words: ");
    scanf("%d", &num);
    printf("----Enter words----\n");
    while (getchar() != '\n');
    for (int i = 0; i < num; i++) {
        fgets(arr[i], 49, stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
        if (check_number(arr[i])==0){
             printf("Invalid Input");
             return 0;
        }
    }
    for (int i = 0; i < num; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
                arr[i][j] = arr[i][j] - 32;
            }
        }
    }
    printf("----Words in Uppercase----\n");
    for (int i = 0; i < num; i++) {
        puts(arr[i]);
    }
    
    int max = 0;
    char max_character = ' ';
    for (int i = 0; i < num; i++) {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            
            
            if (arr[i][j] == ' ') continue; 
            
            int count = 0;
            for (int l=0;l<num;l++){
            for (int k = 0; arr[i][k] != '\0'; k++) {
                if (arr[i][j] == arr[l][k]) {
                    count++;
                }
            }
            
            if (max <= count) { 
                max = count;
                max_character = arr[i][j];                    
            }
        }
        }
    }
    printf("----Frequency----\n");
    printf("Most frequent character= %c\n", max_character);
    printf("Frequency=%d\n", max);
    return 0;
}
