//The functions printing Namaste or Bonjour based on nationality
#include<stdio.h>
void indian(){
  printf("Namaste my name is Agrim Raj\n");
}
void french(){
  printf("Bonjour My name is AGrim Raj\n");
}

int main() {
char nation;
printf("enter your nationality in I or F");
scanf(" %c",&nation);
if (nation=='I'){
  indian();
}else{
  french();
}
}