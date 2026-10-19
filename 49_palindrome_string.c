#include <stdio.h>
#include <string.h>
int reverse(char str[]){
    int len=strlen(str);
    int left,right;
    int flag=1;
    for(left=0,right=len-1;left<right;left++,right--){
        if (str[left]!=str[right]){
            flag=0;
            break;
        }
    } 
    return flag; 
}
int main(){
    char str[100];
    printf("Enter a string");
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int b=reverse(str);
    if (b==0) printf("The string is not palindrome");
    else printf("The string is palindrome");
    return 0;

}

