# include<stdio.h>
//to convert temperature degree to fahrenheit

  /* float radius;
   printf("Enter radius of circle\n");
   scanf("%f",&radius);
   printf("Area of circle is %f",3.14*radius*radius);
   
  int i=0;
  while (i<=8) {
    printf("Hello World %d\n",i);
    i++;
  }
 int num;
 printf("Enter a number");
 scanf("%d",&num);
 int t;
 t=0;
 for(int i=1;i<=num;i++){
  t+=i;
 }
 
 printf("sum of %d numbers is %d",num,t);
 //table of a number inputted ny user
 int num;
 printf("enter a number you want a table of");
 scanf("%d",&num);
 
 for( int i=1;i<=10;i++){
  printf("%d x %d=%d\n",num,i,num*i);
 }
int n;
do {
  printf("Enter a number\n");
  scanf("%d",&n);
  if (n%2!=0){
    break;
  }
}while(1);
printf("got the number");
int num;
printf("Enter a number you want to find factorial of");
scanf("%d",&num);
int t=1;
for(int i=2;i<=num;i++){
  t*=i;
}
printf("The factorial of %d is %d",num,t);
void indian(){
  printf("Namaste my name is Agrim Raj\n");
}
void french(){
  printf("Bonjour My name is AGrim Raj\n");
}

int main() {
char nation;
printf("enter your nationality in I or F");
scanf(" %c",&nation);
if (nation=='I'){
  indian();
}else{
  french();
}
int a,b;
int sum(int a, int b) {
return a+b;
}
int main(){
  printf("Enter first number");
  scanf("%d",&a);
  printf("enter second number");
  scanf("%d",&b);
  int s=sum(a,b);
  printf("sum of %d and %d is %d",a,b,s);


  return 0;
}
int n;
void table(int n) {
  for (int i=1;i<=10;i++){
    printf("%dx%d=%d\n",n,i,n*i);
  }
}

int main(){
  printf("Enter a number");
  scanf("%d",&n);
  table(n);
  return 0;
}
//character to ASCII VALUE
int main(){
  char ch;
  printf("Enter a charcter");
  scanf("%c",&ch);
  printf("ASCII VALUE of %c is %d",ch,ch);
  return 0;
}
//divide one number by other number and display quotient and remainder
int main(){
  int a,b;
  printf("Enter dividend");
  scanf("%d",&a);
  printf("Enter divisor");
  scanf("%d",&b);
  printf("when %d is divided by %d then quotient is %d and remainder is %d",a,b,a/b,a%b);
  return 0;
}
//a+b*c & (a+b)*c
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

}

//convert integer to binary
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
//read integer in reverse order
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
int natsum(int n){
  if (n==1){
    return 1;
  }
  
  int ksum=natsum(n-1);
  int osum=ksum+n;
  return osum;
}
int main(){
  int n;
  printf("Sum of numbers");
  scanf("%d",&n);
  printf("The sum of first %d numbers is %d",n,natsum(n));
}
int fac(int n){
  if (n==0 || n==1){
  return 1;
  }
 int pfac=fac(n-1);
 int ofac=pfac*n;
}
int main(){
  int n;
  printf("enter a number");
  scanf("%d",&n);
  printf("The factorial of %d is %d", n,fac(n));
}
//fibonacci series nth term 
int fibo(int n){
  if (n==0 || n==1){
    return n;
  }
  return fibo(n-1)+fibo(n-2);
}
int main(){
  int n;
  printf("Enter number of terms");
  scanf("%d",&n);
  printf("The first %d terms of fibonacci series is %d ", n,fibo(n));
}
//sum of digits of a number
int sum(int n){
  int t=0;
  
  while (n!=0){
    t+=n%10;
    n=n/10;
  }
  
  return t;
}


int main(){
  int n;
  
  printf("enter a number");
  scanf("%d",&n);
  printf("The sum of digits of %d is %d",n,sum(n));
}*/
//pow function
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
}




             
