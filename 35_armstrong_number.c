//to find whether a number is armstrong or not
#include<stdio.h>
int main(){
    int num,og;
    printf("enter a number");
    scanf("%d",&num);
    int t=0;
    og=num;
    while (num>0){
        int temp=num%10;
        t=t+temp*temp*temp;
        num=num/10;
    }
    if (t==og){
        printf("%d is an armstrong number",og);
    }
    else{
        printf("%d is not an armstrong number",og);
    }
}