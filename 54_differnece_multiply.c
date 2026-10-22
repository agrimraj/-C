#include<stdio.h>
void difmul(int ar[2][10],int n1,int n2){
    for(int i=0;i<10;i++){
        ar[0][i]=n1*(i+1);
        ar[1][i]=n2*(i+1);
    }
    for (int j=0;j<10;j++){
        printf("%d\t", ar[0][j]-ar[1][j]);
    }
}


int main(){
    int ar1[2][10];
    int n1,n2,c;
    printf("Enter 1st number ");
    scanf("%d",&n1);
    printf("Enter 2nd number ");
    scanf("%d",&n2);
    printf("----Differences in Table----\n");
    difmul(ar1,n1,n2);
    
    return 0;

}