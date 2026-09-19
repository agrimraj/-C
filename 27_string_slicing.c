//The custom slicing function using boundaries n and m
#include<stdio.h>
void slice(char str[100],int n, int m){
  char new[100];
  int j=0;
  for (int i=n;i<=m;i++,j++){
    new[j]=str[i];
  }
  new[j]='\0';
  puts(new);
  
}
int main(){
  int n,m;
  char str[100];
  printf("Enter your string\n");
  fgets(str,100,stdin);

  printf("enter initial index");
  scanf("%d",&n);
  printf("enter concluding index");
  scanf("%d",&m);
   char new[100];
  if ((m<n)||(m<0)||(n<0)){
      printf("Invalid as initial should be smaller than concluding index");
      return 1;
  }

    printf("Your sliced version is");

  slice(str,n,m);
   
  return 0;
}