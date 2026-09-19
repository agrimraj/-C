//storing 2 tables in an array
#include <stdio.h>
void store(int arr[][10],int n,int m,int t){
  for (int i=0;i<m;i++) {
    arr[n][i]=t*(i+1);
  }
}
int main(){
  int t1;
  int arr[2][10];
  printf("Enter 1st number you want a table of");
  scanf("%d",&t1);
  store(arr,0,10,t1);
  int t2;
  printf("Enter 2nd number you want a table of");
  scanf("%d",&t2);
  store(arr,1,10,t2);
  printf("The table of %d is \n",t1);
  for(int i=0;i<10;i++){
    printf("%d\t",arr[0][i]);
  }
   printf("\nThe table of %d is \n",t2);
  for(int i=0;i<10;i++){
    printf("%d\t",arr[1][i]);
  }

}