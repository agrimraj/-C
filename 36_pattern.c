//making a pattern
#include<stdio.h>
int main(){
    int i=1;
    for (i=1;i<=5;i++){
        for (int j=1;j<=5-i;j++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (i=4;i>0;i--){
        for (int j=1;j<=5-i;j++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}