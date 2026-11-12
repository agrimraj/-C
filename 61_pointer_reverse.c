/*Reverse an array in place using two pointers, one starting at the beginning and one at the end. Do not use another array.*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element ");
        scanf("%d",&arr[i]);
    }
    int *p=&arr[0];
    int *q=&arr[n-1];
    for (int i=0;i<n/2;i++){
        int temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
    printf("\n----Reverse Array----\n");
    for(int i=0;i<n;i++) printf("%d\t",arr[i]);
    return 0;
}