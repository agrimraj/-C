//The numerical processing routine converting integers to binary strings
#include<stdio.h>
int main(){
  int num,og;
  printf("Enter an integer");
  scanf("%d",&num);
  og=num;
  int t=1;
  while (num!=0){
    t=t*10+num%2;
    num=num/2;
  }
  int bin=0;
  while (t!=0){
    bin=bin*10+t%10;
    t=t/10;
  }
  printf("binary of %d is %d",og,bin/10);
  return 0;
}