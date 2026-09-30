//perfect number checker
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int t=0;
    for (int i=1;i<=num/2;i++){
        if (num%i==0){
            t+=i;
        }
        else{
            continue;
        }
    }
    if (t==num){
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
    return 0;
}