//The standalone logic mimicking the pow function
#include<stdio.h>
int power(int x,int y){
  int t=1;
  for (int i=1;i<=y;i++){
    t=t*x;
  }
return t;
}
int main(){
  int x,y;
  printf("enter number");
  scanf("%d",&x);
  printf("enter power you want it to be raised to");
  scanf("%d",&y);
  printf("%d raised to power %d is %d",x,y,power(x,y));
  return 0;
}