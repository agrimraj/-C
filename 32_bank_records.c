//The fixed bank structure logic array
#include<stdio.h>
typedef struct bankinformation{
  int acc;
  char name[100];
}bank;
void printinfo(bank n);
int main(){
  bank ar[2];
  for (int i=0;i<=1;i++){
    printf("\nENTER BANK ACCOUNT DETAILS\n");
    printf("Enter account holder name");
    scanf("%s",ar[i].name);
    printf("Enter account number");
    scanf("%d",&ar[i].acc);
    printinfo(ar[i]);
  }
  return 0;
}
void printinfo(bank n){
  printf("The name of person is %s and account number is %d",n.name,n.acc);
}