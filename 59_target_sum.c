/* To print the indices of those two numbers who would help reach the target sum */
#include<stdio.h>
int main(){
    int size;
    printf("Enter number of elements ");
    scanf("%d",&size);
    int ar[size];
    for (int i=0;i<size;i++){
        printf("Enter element %d ",(i+1));
        scanf("%d",&ar[i]);
    }
    int target,array[2];
    printf("enter the target sum ");scanf("%d",&target);
    for (int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if ((ar[i]+ar[j])==target){
                array[0]=(int)i;
                array[1]=(int)j;                
            }
        }
    }
    for(int i=0;i<2;i++) printf("%d\n",array[i]);
    return 0;


}