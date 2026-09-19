//getting nth term of fibonacci
#include<stdio.h>
int fibo(int n){
  if (n==0 || n==1){
    return n;
  }
  return fibo(n-1)+fibo(n-2);
}
int main(){
  int n;
  printf("Enter number of terms");
  scanf("%d",&n);
  printf("The %d term  of fibonacci series is %d ", n,fibo(n-1));
  return 0;
}
