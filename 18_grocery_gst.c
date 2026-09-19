//The structural floats array applying a 5% tax computation
#include<stdio.h>
int main(){
  float price[3];
  printf("Enter price of tomatoes");
  scanf("%f",&price[0]);
   printf("Enter price of potatoes");
  scanf("%f",&price[1]);
   printf("Enter price of onions");
  scanf("%f",&price[2]);
  printf("final cowst with gst\n Tomatoes=%f\n Potatoes=%f\n Onions=%f\n",price[0]+0.05*price[0],price[1]+0.05*price[1],price[2]+0.05*price[2]);
return 0;
}
