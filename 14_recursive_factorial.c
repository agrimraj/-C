//The dynamic fac recursion routine
#include<stdio.h>
int fac(int n){
  if (n==0 || n==1){
  return 1;
  }
 int pfac=fac(n-1);
 int ofac=pfac*n;
}
int main(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  printf("The factorial of %d is %d", n,fac(n));
  return 0;
}
