 //finds number of odd numbers in an array
 #include<stdio.h>
 int t=0;
int countodd(int arr[],int n){
  for (int i=0;i<n;i++){
   
    if (arr[i]%2!=0) {
      t+=1;
    }
    else {
      continue;
    }
    
  }
  return t;
}
int main(){
  int n;
  printf("Enter number of elements in array");
  scanf("%d",&n);
  int arr[n];
  for (int i=0;i<n;i++){
    printf("Enter element at %d index",i);
    scanf("%d",&arr[i]);
  }
  printf("Number of odd numbers in your array is %d",countodd(arr,n));
}