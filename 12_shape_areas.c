//The structural functions managing square and circle calculations
#include<stdio.h>
float squarearea(float side){
  return side*side;
}
float circlearea(float rad){
  return 3.14*rad*rad;
}
int main(){
  float side,rad;
  printf("Enter side of square");
  scanf("%f",&side);
  printf("Area of square of side %f is %f\n",side,squarearea(side));
   printf("Enter radius of circle");
  scanf("%f",&rad);
  printf("Area of circle of radius %f is %f",rad,circlearea(rad));
  return 0;
}
