//gives sum of digits of number
#include<stdio.h>
int sum(int n){
  int t=0;
  
  while (n!=0){
    t+=n%10;
    n=n/10;
  }
  
  return t;
}


int main(){
  int n;
  
  printf("enter a number");
  scanf("%d",&n);
  printf("The sum of digits of %d is %d",n,sum(n));
  return 0;
}