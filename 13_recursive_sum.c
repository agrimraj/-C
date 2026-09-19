//The dynamic natsum recursion calculation block
int natsum(int n){
  if (n==1){
    return 1;
  }
  
  int ksum=natsum(n-1);
  int osum=ksum+n;
  return osum;
}
int main(){
  int n;
  printf("Sum of numbers");
  scanf("%d",&n);
  printf("The sum of first %d numbers is %d",n,natsum(n));
  return 0;
}
