#include<stdio.h>
int prime(int num){
    int i=2;
    while(num>1){
        if (num%i==0){
            printf("%d\t",i);
            num=num/i;
        }
        else i++;
    }
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if (num==1)
    printf("Do again");
    else prime(num);
return 0;

}