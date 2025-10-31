#include <stdio.h>

#define senpra printf("--------------------------------\n");

int main(){
    int i;
    senpra
    printf("      Divisible by 8\n");
    senpra

    for(i = 1; i <= 100; i++){ //++i, i = i + 1, i += 1
        if(i % 8 !=0){
            continue;
        }
        printf("%d\n", i);
    }


    senpra

printf("    Thankyou for watching\n");
senpra

    return 0;
}