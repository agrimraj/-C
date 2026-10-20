#include<stdio.h>
int binarysearch(int ar[],int size,int n){
    int low=0;
    int high=size-1;
    while (low<=high){
        int mid=low+(high-low)/2;
        if (ar[mid]==n){
            return mid;
        }
        if (ar[mid]>n){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int size;
    printf("Enter number of elements ");
    scanf("%d",&size);
    int ar[size];
    for (int i=0;i<size;i++){
        printf("enter element %d= ",i+1);
        scanf("%d",&ar[i]);
    }
    int n;
    printf("Enter element to search ");
    scanf("%d",&n);
    int c=binarysearch(ar,size,n);
    printf("%d is element is present at index %d",n,c);
    return 0;
}