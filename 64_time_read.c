#include<stdio.h>
#include<time.h>
int main(){
    time_t current;
    time(&current);
    printf("Current time: %s",ctime(&current));
    return 0;
}