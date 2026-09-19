//The security snippet executing strcat with value "123"
# include <string.h>
#include<stdio.h>
int main(){
  char pass[100];
  printf("enter your unsalted passkey");
  scanf("%s",&pass);
  char salt[]="123";
  strcat(pass,salt);
  printf("Your salted passkey is %s",pass);
  return 0;


}
