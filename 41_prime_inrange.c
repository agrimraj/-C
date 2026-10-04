//to print all the prime numbers in a given range
#include<stdio.h>
int main(){
    int num;
    printf("Enter ending range ");\
    scanf("%d",&num);
    
    printf("-----PRIME NUMBERS UPTO %d-----\n",num);
    for(int i=2;i<=num;i++){
        int flag=0;
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                flag=1;
            }
        }
        if(flag!=1){
            printf("%d\n",i);
        }
    }

}