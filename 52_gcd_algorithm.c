#include<stdio.h>
int gcd(int a,int b){
    if (b==0)
    return a;
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b,c,d;
    printf("Enter the numbers for finding gcd");
    scanf("%d %d",&a,&b);
    if (a>b){
        c=gcd(a,b);
        printf("The gcd of %d and %d is %d ",a,b,c);
    }
    else{
        d=gcd(b,a);
        printf("The gcd of %d and %d is %d ",a,b,d);
    }
    
    return 0;
    
}