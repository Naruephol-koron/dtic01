#include <stdio.h>

#define senpra printf("--------------------------------\n");

int main(){
    int number;

    senpra
    printf("      Even & Odd Number\n");
    senpra

    while( 1 ){ //infinit loop
        printf("Enter number: ");
        scanf("%d", &number);
        if(number <= 0){
        senpra
            break;
    }
    if(number % 2 ==0 ){
        printf("Number is even number\n");
    }else{
        printf("Number is odd number\n");
    }
    senpra
    }
    return 0;
}