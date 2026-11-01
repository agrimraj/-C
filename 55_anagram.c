#include <stdio.h>
#include <string.h>
int ana(char s, char str[100]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == s) {
            str[i] = '*'; 
            return 1;     
        }
    }
    return 0; 
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first word: ");
    fgets(str1, 100, stdin);
    printf("Enter second word: ");
    fgets(str2, 100, stdin);
    
   
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    int r1 = strlen(str1);
    int r2 = strlen(str2);
    int count = 0;
    
    
    if (r1 != r2) {
        printf("The two words are not anagrams\n");
        return 0;
    }
    
    for (int i = 0; str1[i] != '\0'; i++) {
        if (ana(str1[i], str2) == 1) {
            count++;        
        }
    }
    
    
    if (count == r1) {
        printf("The two words are anagrams\n");
    } else {
        printf("The two words are not anagrams\n");
    }
    
    return 0;
}
