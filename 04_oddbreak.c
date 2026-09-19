//The loop that keeps asking for inputs until an odd number is entered
#include<stdio.h>
int main(){

int n;
do {
  printf("Enter a number\n");
  scanf("%d",&n);
  if (n%2!=0){
    break;
  }
}while(1);
printf("got the number");
}