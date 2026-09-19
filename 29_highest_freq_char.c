//The nested loop checking for character frequencies
#include<stdio.h>
int main(){
  int max=0;
  char str[100];
  char high=str[0];
  printf("Enter a string");
  fgets(str,100,stdin);
  for (int i=0;str[i]!='\0';i++){
    int count=0;
    for(int j=0;str[j]!='\0';j++){
      if (str[j]==str[i]){
        count+=1;
      }
    if (count>=max){
      max=count;
      high=str[i];
    }

    }
}
printf("The highest number of characters in your string is %d and is of %c",max,high);
}