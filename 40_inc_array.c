//to order array in an increasing order
#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter number of elements in your array ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        printf("Enter element at index %d ",i);
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (ar[i]>ar[j]){
              temp=ar[i];
              ar[i]=ar[j];
              ar[j]=temp;  
            }
        }
    }
    printf("-----ARRAY IN INCREASING ORDER-----\n");
    for(int b=0;b<n;b++){
        printf("%d\n",ar[b]);
    }
    return 0;
}