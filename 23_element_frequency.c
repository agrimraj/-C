//The simple scanning algorithm computing matching occurrences
#include <stdio.h>
int main(){
  int n;
  
  printf("Enter number of elements");
  scanf("%d",&n);
  int arr[n];
  for (int i=0;i<n;i++){
    printf("Enter element at %d index\n",i);
    scanf("%d",&arr[i]);
  }
  printf("enter element u want to find frequency of");
  int num;
  scanf("%d",&num);
  int count=0;
  for (int i=0;i<n;i++){
    if (num==arr[i]){
      count+=1;
    }
    else {
      continue;
    }
    
  }
  printf("The number of %d in your array is %d",num,count);
  return 0;

}