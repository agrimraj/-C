 //The basic loop version calculating the sum of num inputs
 #include <stdio.h>
 int main(){
 
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 int t;
 t=0;
 for(int i=1;i<=num;i++){
  t+=i;
 }
 
 printf("sum of %d numbers is %d",num,t);
 return 0;
}