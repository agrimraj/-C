#include<stdio.h>

int main(){
  int num, og;
  char rem[100];
  printf("Enter an integer: ");
  scanf("%d", &num);
  og = num;
  
 
  if (num == 0) {
    printf("The hexadecimal of 0 is 0\n");
    return 0;
  }

  int t, i = 0;
  while (num != 0){
    t = num % 16;
    num = num / 16;
    rem[i] = t;
    i++;
  }
int r = i; 
printf("The hexadecimal of %d is ", og); 
for (int i = r - 1; i >= 0; i--){ 
    if (rem[i] < 10) {
      printf("%d", rem[i]);
    } else {
      printf("%c", rem[i] + 55);
    }
  }
  printf("\n");
  
  return 0;
}
