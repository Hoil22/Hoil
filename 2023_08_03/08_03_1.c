#include <stdio.h>

//커피한잔 4500원 ,샌드위치 1개 6000원, 샌드위치 구매 시 커피 3500원

int main(){

    int coffee, sandwitch;

    printf("구매할 커피의 수를 입력해주세요:");
    scanf("%d", &coffee);
    printf("구매할 샌드위치의 수를 입력해주세요:");
    scanf("%d", &sandwitch);

    if(sandwitch==0)
        printf("커피 %d잔, 샌드위치 0개 구매 시 \n 주문하신 메뉴의 총 금액은 %d원 입니다.", coffee, coffee*4500);
    else if(coffee==0)
        printf("커피 0잔, 샌드위치 %d개 구매 시 \n 주문하신 메뉴의 총 금액은 %d원 입니다.", sandwitch, sandwitch*6000);
    else if(coffee!=0 && sandwitch!=0)
        printf("커피 %d잔, 샌드위치 %d개 구매 시 \n주문하신 메뉴의 총 금액은 %d원 입니다.", coffee, sandwitch, coffee*3500+sandwitch*6000); 

    return 0;
}