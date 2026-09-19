//The ASCII manipulation loop swapping uppercase/lowercase characters
#include<stdio.h>
int main(){
  char str[100],new_str[100];
  printf("Enter a string");
  fgets(str,100,stdin);
  int i;
  for(i=0;str[i]!='\0';i++){
    if (str[i]>=97){
      new_str[i]=str[i]-32;
    }
    else if (str[i]<97){
      new_str[i]=str[i]+32;
    }
  }
  new_str[i]='\0';

printf("new string is %s",new_str);
return 0;
}