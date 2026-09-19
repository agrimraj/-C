//The math processing script flipping numbers around
#include<stdio.h>
int main(){
  int num;
  printf("enter a number");
  scanf("%d",&num);
  int og,rev=0;
  og=num;
  while (num!=0){
    rev=num%10+rev*10;
    num=num/10;
  }
  printf("The reverse order of %d is %d",og,rev);
  return 0;

}
