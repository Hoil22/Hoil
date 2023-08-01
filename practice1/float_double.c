#include <stdio.h>

int main(){

    float a=12.345;
    double b=98.765;

    printf("float변수인 a의 값은 %f이다.\n", a);
    printf("double변수인 b의 값은 %lf이다.\n", b);

    printf("소수점을 조절한 후\n");
    printf("float변수인 a의 값은 %.1f이다.\n", a);
    printf("double변수인 b의 값은 %.2lf이다.\n", b);

    return 0;
}