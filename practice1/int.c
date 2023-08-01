#include <stdio.h>

int main(){
    int num1=10;
    int num2=20;

    printf("num1의 초기값은 %d이다.\n", num1);
    printf("num2의 초기값은 %d이다.\n", num2);

    num2=50;
    num1=5;

    printf("num1의 변경값은 %d이다.\n", num1);
    printf("num2의 변경값은 %d이다.\n", num2);

    return 0;
}