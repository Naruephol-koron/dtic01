#include <stdio.h>

#define senpra printf("--------------------------------\n");

int main(){
    int number, result;
    int x;

    senpra
    printf("     Multiplication table\n");
    senpra
    printf("Enter number: ");
    scanf("%d", &number);
    senpra

    for(x = 1; x <= 12; x = x + 1){ //x++, ++x, x += 1
        result = number * x;
        printf("%d x %d = %d\n", number, x, result); 
    }

    senpra
    
    return 0;
}