#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int a=rand()%100;
    int num;
    int i;
    printf("%d", a);

    printf("숫자 맞추기 게임입니다. 기회는 5번 입니다.\n\n");

    printf("남은기회 5번\n");
    printf("숫자를 맞혀 보세요:");
    scanf("%d", &num);

    for(i=0;i<4;i++){
    if(num>a){
        printf("down\n\n");
        printf("남은기회 %d번\n", 4-i);
        printf("숫자를 맞혀보세요:");
        scanf("%d", &num);}
    
    else if(num<a){
        printf("up\n\n");
        printf("남은기회 %d번\n", 4-i);
        printf("숫자를 맞혀 보세요:");
        scanf("%d", &num);}
    
    else if(num==a){
        printf("정답입니다!\n");
        break;
    }
    
    }

    

    return 0;
}