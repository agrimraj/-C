//Fibonacci series using array
#include <stdio.h>
int main(){
  int n;
  printf("Enter number of elements u want");
  scanf("%d",&n);
  int fibo[n];
  fibo[0]=0;
   fibo[1]=1;
   for (int i=2;i<n;i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
  }
  printf("The first %d numbers of fibonacci series is\n",n);
  for (int i=0;i<n;i++){
    printf("%d\t",fibo[i]);
  }
return 0;

}