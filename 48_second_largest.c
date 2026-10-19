#include<stdio.h>
int n;
int large(int ar[],int n){
    int a=ar[0];
    for (int i=0;i<n;i++){
        if (ar[i]>=a){
            a=ar[i];
        }
        else continue;
    }
    return a;
}
int main(){
    printf("Enter number of integers in the array ");
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        printf("Enter element at index %d ",i);
        scanf("%d",&ar[i]);
    }
    int b=large(ar,n);
    int new[n-1];
    int skipped=0;
    for (int i=0,j=0;i<n,j<n-1;i++,j++){
        if (ar[i]==b && !skipped){
            skipped=1;
            continue;
        }
        else{
            new[j]=ar[i];
        }
    }
    int d=large(new,n-1);
    printf("The second largest element in the array is %d",d);
    return 0;
}