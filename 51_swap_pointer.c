#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
int main(){
    int a,b;
    printf("Enter two numbers for swapping ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("The numbers after swapping %d and %d",a,b);
    return 0;
}