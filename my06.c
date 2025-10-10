// ป้อนชื่อ-สกุล ชื่อเล่น อายุ เงินเดือ นแลสดงผล ออกทางหน้าจอ 
#include <stdio.h>

#define showline printf("************************\n");

int main(){
    char fullname[50];  //%[^\n]
    char nickname[20];  //%s
    int age;       //%d
    float salary;  //%lf

    showline
    printf("  Your Information   \n  ");
    showline
    printf("Enter your fullname: ");
    scanf("%[^\n]" , &fullname);
    printf("Enter your nickname: ");
    scanf("%s" , &nickname);
    printf("Enter your age: ");
    scanf("%d" , &age);
    printf("Enter your salary: ");
    scanf("%f" , &salary);
    showline
    printf("Your fullname: %s\n ", fullname );
    printf("Your nickname: %s\n ", nickname );
    printf("Your age: %d\n ", age );
    printf("Your salary: %.2f\n ", salary );
    showline




    return 0;
}