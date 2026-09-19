//The math comparison checking a+b*c vs (a+b)*c
#include <stdio.h>
int main(){
  int a,b,c;
  printf("Enter first number");
  scanf("%d",&a);
  printf("Enter second number");
  scanf("%d",&b);
  printf("Enter third number");
  scanf("%d",&c);
  printf("%d\n",a+b*c);
  printf("%d",(a+b)*c);
  return 0;

}
