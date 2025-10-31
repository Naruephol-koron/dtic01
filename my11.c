#include <stdio.h>

#define senpra printf("---------------------------------------\n");

int main(){
    int x = 1;

    senpra
    printf("      Show Com Eng\n"); 
    senpra

    while(x <= 200){
        //printf("%d: Com Eng\n", x);
        printf("Com Eng\n", x);
        x = x +1; //++x, x++, x+=1
    }

    senpra
    return 0;
}