//Takes name as input and prints its length
#include<stdio.h>
int main(){
  char name[100];
  printf("Enter your name");
  fgets(name,100,stdin);
  puts(name);
  int count=0;
  for (int i;name[i]!='\0';i++){
    count+=1;
  }
  printf("Length of your name is %d",count);
  return 0;

}