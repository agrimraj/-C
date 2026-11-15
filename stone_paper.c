#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game(char user,char comp){
    if (user==comp) return -1;
    //checking for scissor vs paper
    if (user=='p' && comp=='s') return 1;
    else if (user=='s' && comp=='p') return 0;
    //checking for rock vs paper
    if (user=='r' && comp=='p') return 1;
    else if (user=='p' && comp=='r') return 0;
    //checking for rock vs scissor
    if (user=='s' && comp=='r') return 1;
    else if (user=='r' && comp=='s') return 0;
}

int main(){
    char user,comp;
    srand(time(NULL));
    int n=rand()%100;
    int result;
    if (n>0 && n<33) comp='s';
    else if (n>33 && n<67) comp='p';
    else comp='r';
    printf("\n\n-------ROCK-PAPER-SCISSOR--------\n\n");
    printf("\n\nEnter s for SCISSORS,p for PAPER and r for ROCK\n\n");
    printf("Your turn ");
    scanf("%c",&user);
    printf("Computer's choice: %c\n",comp);
    result=game (user,comp);
    if (result==1) printf("YOU LOSE TRY AGAIN\n");
    else if(result==0) printf("CONGRATULATIONS YOU WIN\n");
    else printf("GAME is TIED\n");
    return 0;
}