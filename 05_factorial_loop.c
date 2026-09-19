//The simple loop version calculating factorials
#include<stdio.h>
int main(){

int num;
printf("Enter a number you want to find factorial of");
scanf("%d",&num);
int t=1;
for(int i=2;i<=num;i++){
  t*=i;
}
printf("The factorial of %d is %d",num,t);
return 0;
}
