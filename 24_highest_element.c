//highest number in an array
#include<stdio.h>
int main(){
  int n;
  printf("Enter number of elements in your array");
  scanf("%d",&n);
  int arr[n];
  for (int i=0;i<n;i++){
    printf("Enter element at %d index",i);
    scanf("%d",&arr[i]);
  }
  int big=arr[0];
  int t=0;
  for (int i=0;i<n;i++){
    if (arr[i]>big){
      big=arr[i];
      t=i;
    }
  }
  printf("The highest element in your array is %d and its present at index %d",big,t);
  return 0;
}