//The calculation tool displaying a/b and a%b
#include <stdio.h>
int main(){
  int a,b;
  printf("Enter dividend");
  scanf("%d",&a);
  printf("Enter divisor");
  scanf("%d",&b);
  printf("when %d is divided by %d then quotient is %d and remainder is %d",a,b,a/b,a%b);
  return 0;
}