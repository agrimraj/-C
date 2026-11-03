#include<stdio.h>
int maxi(int arr[],int num){
    int max=arr[0];
    for (int i=0;i<num;i++) if(max<=arr[i]) max=arr[i];
    return max;
    }
int main(){
    int num;
    printf("Enter number of elements\n");
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++) printf("Enter element %d\n ",i+1),scanf("%d",&arr[i]);
    int count_move=0;
    int b=maxi(arr,num);
    for (int j=0;j<num;j++){
        if (b!=arr[j]){
            arr[j]=arr[j]+(b-arr[j]);
            count_move++;
        }
    }
    printf("Minimum total number of moves required= %d",count_move);
    return 0;
}