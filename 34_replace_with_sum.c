//The file-handling routine summarizing integer items
#include<stdio.h>
int main(){
  FILE *fptr;
  fptr=fopen("Text.txt","r");
  int n;
  int cur=0;
  while (fscanf(fptr,"%d",&n)!=EOF){
    cur+=n;
  }
  fclose(fptr);
  fptr=fopen("Text.txt","w");
  fprintf(fptr,"The sum is %d",cur);
  fclose(fptr);
 printf("Numbers successfully replaced with their sum!\n");

  return 0;
}