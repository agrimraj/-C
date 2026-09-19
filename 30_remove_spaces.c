//The character sorting loop stripping \t, \n, and spaces
#include<stdio.h>
int main(){
  char str[100], new_str[100];
  int j=0;
  printf("Enter a sentence");
  fgets(str,100,stdin);
  for (int i=0;str[i]!='\0';i++){
    if ((str[i]!='\t')&&(str[i]!=' ')&&(str[i]!='\n')){
      new_str[j]=str[i];
      j++;
    }
    else continue;
  }
  new_str[j]='\0';
  printf("after removing all spaces new=%s\n",new_str);
  return 0;
}