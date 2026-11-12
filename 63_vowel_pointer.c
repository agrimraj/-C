/*Accept a string using a character pointer and count the vowels without using string library functions.*/
#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    printf("Enter an element");
    fgets(word,100,stdin);
    word[strcspn(word,"\n")]='\0';
    char *str=word;
    int count=0;
    while (*str!='\0'){
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o' || *str=='u'){
            count++;
        }
        str++;
}
printf("The number of vowels is %d",count);
return 0;
}